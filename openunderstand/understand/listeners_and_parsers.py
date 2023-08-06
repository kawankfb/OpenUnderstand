from analysis_passes.Throws_ThrowsBy import Throws_TrowsBy
from analysis_passes.DotRef_DorRefBy import DotRef_DotRefBy
from analysis_passes.callNonDynamic_callNonDynamicby import (
    CallNonDynamicAndCallNonDynamicBy,
)
from analysis_passes.define_definein import DefineListener
from analysis_passes.modify_modifyby import ModifyListener
from analysis_passes.entity_manager_g11 import (
    EntityGenerator,
    FileEntityManager,
    get_created_entity,
)
from analysis_passes.use_useby import UseAndUseByListener
from analysis_passes.set_setby import SetAndSetByListener
from understand.override_overrideby__G12 import overridelistener
from understand.couple_coupleby__G12 import CoupleAndCoupleBy
from analysis_passes.create_createby_g9 import CreateAndCreateBy
from analysis_passes.declare_declarein import DeclareAndDeclareinListener
from utils.utilities import setup_logger, timer_decorator
import os

logger = setup_logger()

class ListenersAndParsers:
    def __init__(self):
        self.logger = logger

    @timer_decorator(logger)
    def parser(self, file_address, p):
        try:
            parse_tree = p.Parse(file_address)
            file_ent = p.getFileEntity(
                path=file_address, name=os.path.basename(file_address)
            )
            tree = parse_tree
            self.logger.info("file parse success")
            return tree, parse_tree, file_ent
        except Exception as e:
            self.logger.error(
                "An Error occurred in file file parse:" + file_address + "\n" + str(e)
            )
            return None, None, None

    @timer_decorator(logger)
    def entity_gen(self, file_address, parse_tree):
        return EntityGenerator(file_address, parse_tree)

    @timer_decorator(logger)
    def create_listener(self, tree, file_ent, file_address, p):
        try:
            #  create refs TODO: fix NOT NULL constraint failed: entitymodel._kind_id
            listener = CreateAndCreateBy()
            p.Walk(listener, tree)
            p.addCreateRefs(listener.create, file_ent, file_address)
            self.logger.info("create refs success ")
        except Exception as e:
            self.logger.error(
                "An Error occurred in file create refs :" + file_address + "\n" + str(e)
            )

    @timer_decorator(logger)
    def define_listener(self, tree, file_ent, file_address, p):
        try:
            listener = DefineListener()
            p.Walk(listener, tree)
            p.addDefineRefs(listener.defines, file_ent)
            self.logger.info("define success ")
        except Exception as e:
            self.logger.error(
                "An Error occurred for reference implement in file define:"
                + file_address
                + "\n"
                + str(e)
            )

    @timer_decorator(logger)
    def declare_listener(self, tree, file_ent, file_address, p):
        try:
            # declare
            listener = DeclareAndDeclareinListener()
            p.Walk(listener, tree)
            p.addDeclareRefs(listener.declare, file_ent)
            self.logger.info("declare success ")
        except Exception as e:
            logger.error(
                "An Error occurred for reference declare in file:"
                + file_address
                + "\n"
                + str(e)
            )

    @timer_decorator(logger)
    def modify_listener(self, parse_tree, entity_generator, file_address, p):
        try:
            # modify TODO : FIX modify error not found
            listener = ModifyListener(entity_generator, logger)
            p.Walk(listener, parse_tree)
            p.add_modify_and_modifyby_reference(listener.modify)
            self.logger.info("modify success ")
        except Exception as e:
            self.logger.error(
                "An Error occurred for reference modify in file:"
                + file_address
                + "\n"
                + str(e)
            )

    @timer_decorator(logger)
    def override_listener(self, tree, file_ent, file_address, p):
        classesx = {}
        extendedlist = []
        try:
            listener = overridelistener()
            listener.extendedtoentity = {}
            listener.set_dictionary(classesx)
            listener.set_file(file_address)
            listener.set_list(extendedlist)
            p.Walk(listener, tree)
            classesx = listener.get_classes
            extendedlist = listener.get_extendeds
            p.addoverridereference(classesx, extendedlist, file_ent)
            self.logger.info("overrides success ")
        except Exception as e:
            self.logger.error(
                "An Error occurred in override reference in file :"
                + file_address
                + "\n"
                + str(e)
            )

    @timer_decorator(logger)
    def couple_listener(self, tree, file_ent, file_address, p):
        classescoupleby = {}
        couple = []
        try:
            listener = CoupleAndCoupleBy()
            listener.set_file(filex=file_address)
            listener.set_classesx(classesx=classescoupleby)
            listener.set_couples(couples=couple)
            p.Walk(listener, tree)
            classescoupleby = listener.get_classes
            couple = listener.get_couples
            p.addcouplereference(classescoupleby, couple, file_ent)
            self.logger.info("couple success ")
        except Exception as e:
            self.logger.error(
                "An Error occurred in couple reference in file :"
                + file_address
                + "\n"
                + str(e)
            )

    @timer_decorator(logger)
    def throws_listener(self, tree, file_ent, file_address, p):
        try:
            # Throws
            listener = Throws_TrowsBy()
            listener.implement = []
            p.Walk(listener, tree)
            p.addThrows_TrowsByRefs(
                listener.implement, file_ent, file_address, 236, 237, True
            )
            self.logger.info("Throws success ")
        except Exception as e:
            logger.error(
                "An Error occurred in throws in file :" + file_address + "\n" + str(e)
            )

    @timer_decorator(logger)
    def dotref_listener(self, tree, file_ent, file_address, p):
        try:
            # dot ref TODO:  'ClassBodyDeclaration1Context' object has no attribute 'modifier'
            listener = DotRef_DotRefBy()
            p.Walk(listener, tree)
            p.addThrows_TrowsByRefs(
                listener.implement, file_ent, file_address, 198, 199, False
            )
            self.logger.info("DotRef success ")
        except Exception as e:
            self.logger.error(
                "An Error occurred in dotref in file :" + file_address + "\n" + str(e)
            )

    @timer_decorator(logger)
    def setby_listener(self, tree, file_ent, file_address, p, stream: str = ""):
        try:
            # set ref
            listener = SetAndSetByListener(file_address)
            p.Walk(listener, tree)
            p.addSetRefs(listener.setBy, file_ent, stream)
            self.logger.info("set Ref success ")
        except Exception as e:
            self.logger.error(
                "An Error occurred in set ref in file :" + file_address + "\n" + str(e)
            )

    @timer_decorator(logger)
    def useby_listener(self, tree, file_ent, file_address, p, stream: str = ""):
        try:
            # use ref
            listener = UseAndUseByListener()
            p.Walk(listener, tree)
            p.addUseRefs(listener.useBy, file_ent, stream)
            self.logger.info("use ref success ")
        except Exception as e:
            self.logger.error(
                "An Error occurred in use ref in file :" + file_address + "\n" + str(e)
            )

    @timer_decorator(logger)
    def callby_listener(self, tree, file_ent, file_address, p):
        try:
            # call ref TODO: fix 'Statement6Context' object has no attribute 'expression'
            # call ref TODO: fix 'NoneType' object has no attribute 'blockStatement'
            listener = CallNonDynamicAndCallNonDynamicBy()
            p.Walk(listener, tree)
            p.addCallOrCallByRefs(listener.implement, file_ent, file_address)
            self.logger.info("call ref success ")
        except Exception as e:
            self.logger.error(
                "An Error occurred in call ref in file :" + file_address + "\n" + str(e)
            )