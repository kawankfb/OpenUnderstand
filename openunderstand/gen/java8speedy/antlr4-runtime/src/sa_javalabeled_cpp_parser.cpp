/*
 * This file was auto-generated by speedy-antlr-tool v1.3.1
 *  https://github.com/amykyta3/speedy-antlr-tool
 */

#define PY_SSIZE_T_CLEAN
#include <Python.h>

#include <cstring>

#include "antlr4-runtime.h"
#include "JavaLabeledLexer.h"
#include "JavaLabeledParser.h"
#include "speedy_antlr.h"

#include "sa_javalabeled_translator.h"
antlr4::tree::ParseTree* get_parse_tree_compilationUnit(JavaLabeledParser *parser) {return parser->compilationUnit();}
antlr4::tree::ParseTree* get_parse_tree_packageDeclaration(JavaLabeledParser *parser) {return parser->packageDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_importDeclaration(JavaLabeledParser *parser) {return parser->importDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_typeDeclaration(JavaLabeledParser *parser) {return parser->typeDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_modifier(JavaLabeledParser *parser) {return parser->modifier();}
antlr4::tree::ParseTree* get_parse_tree_classOrInterfaceModifier(JavaLabeledParser *parser) {return parser->classOrInterfaceModifier();}
antlr4::tree::ParseTree* get_parse_tree_variableModifier(JavaLabeledParser *parser) {return parser->variableModifier();}
antlr4::tree::ParseTree* get_parse_tree_classDeclaration(JavaLabeledParser *parser) {return parser->classDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_typeParameters(JavaLabeledParser *parser) {return parser->typeParameters();}
antlr4::tree::ParseTree* get_parse_tree_typeParameter(JavaLabeledParser *parser) {return parser->typeParameter();}
antlr4::tree::ParseTree* get_parse_tree_typeBound(JavaLabeledParser *parser) {return parser->typeBound();}
antlr4::tree::ParseTree* get_parse_tree_enumDeclaration(JavaLabeledParser *parser) {return parser->enumDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_enumConstants(JavaLabeledParser *parser) {return parser->enumConstants();}
antlr4::tree::ParseTree* get_parse_tree_enumConstant(JavaLabeledParser *parser) {return parser->enumConstant();}
antlr4::tree::ParseTree* get_parse_tree_enumBodyDeclarations(JavaLabeledParser *parser) {return parser->enumBodyDeclarations();}
antlr4::tree::ParseTree* get_parse_tree_interfaceDeclaration(JavaLabeledParser *parser) {return parser->interfaceDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_classBody(JavaLabeledParser *parser) {return parser->classBody();}
antlr4::tree::ParseTree* get_parse_tree_interfaceBody(JavaLabeledParser *parser) {return parser->interfaceBody();}
antlr4::tree::ParseTree* get_parse_tree_classBodyDeclaration(JavaLabeledParser *parser) {return parser->classBodyDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_memberDeclaration(JavaLabeledParser *parser) {return parser->memberDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_methodDeclaration(JavaLabeledParser *parser) {return parser->methodDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_methodBody(JavaLabeledParser *parser) {return parser->methodBody();}
antlr4::tree::ParseTree* get_parse_tree_typeTypeOrVoid(JavaLabeledParser *parser) {return parser->typeTypeOrVoid();}
antlr4::tree::ParseTree* get_parse_tree_genericMethodDeclaration(JavaLabeledParser *parser) {return parser->genericMethodDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_genericConstructorDeclaration(JavaLabeledParser *parser) {return parser->genericConstructorDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_constructorDeclaration(JavaLabeledParser *parser) {return parser->constructorDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_fieldDeclaration(JavaLabeledParser *parser) {return parser->fieldDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_interfaceBodyDeclaration(JavaLabeledParser *parser) {return parser->interfaceBodyDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_interfaceMemberDeclaration(JavaLabeledParser *parser) {return parser->interfaceMemberDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_constDeclaration(JavaLabeledParser *parser) {return parser->constDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_constantDeclarator(JavaLabeledParser *parser) {return parser->constantDeclarator();}
antlr4::tree::ParseTree* get_parse_tree_interfaceMethodDeclaration(JavaLabeledParser *parser) {return parser->interfaceMethodDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_interfaceMethodModifier(JavaLabeledParser *parser) {return parser->interfaceMethodModifier();}
antlr4::tree::ParseTree* get_parse_tree_genericInterfaceMethodDeclaration(JavaLabeledParser *parser) {return parser->genericInterfaceMethodDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_variableDeclarators(JavaLabeledParser *parser) {return parser->variableDeclarators();}
antlr4::tree::ParseTree* get_parse_tree_variableDeclarator(JavaLabeledParser *parser) {return parser->variableDeclarator();}
antlr4::tree::ParseTree* get_parse_tree_variableDeclaratorId(JavaLabeledParser *parser) {return parser->variableDeclaratorId();}
antlr4::tree::ParseTree* get_parse_tree_variableInitializer(JavaLabeledParser *parser) {return parser->variableInitializer();}
antlr4::tree::ParseTree* get_parse_tree_arrayInitializer(JavaLabeledParser *parser) {return parser->arrayInitializer();}
antlr4::tree::ParseTree* get_parse_tree_classOrInterfaceType(JavaLabeledParser *parser) {return parser->classOrInterfaceType();}
antlr4::tree::ParseTree* get_parse_tree_typeArgument(JavaLabeledParser *parser) {return parser->typeArgument();}
antlr4::tree::ParseTree* get_parse_tree_qualifiedNameList(JavaLabeledParser *parser) {return parser->qualifiedNameList();}
antlr4::tree::ParseTree* get_parse_tree_formalParameters(JavaLabeledParser *parser) {return parser->formalParameters();}
antlr4::tree::ParseTree* get_parse_tree_formalParameterList(JavaLabeledParser *parser) {return parser->formalParameterList();}
antlr4::tree::ParseTree* get_parse_tree_formalParameter(JavaLabeledParser *parser) {return parser->formalParameter();}
antlr4::tree::ParseTree* get_parse_tree_lastFormalParameter(JavaLabeledParser *parser) {return parser->lastFormalParameter();}
antlr4::tree::ParseTree* get_parse_tree_qualifiedName(JavaLabeledParser *parser) {return parser->qualifiedName();}
antlr4::tree::ParseTree* get_parse_tree_literal(JavaLabeledParser *parser) {return parser->literal();}
antlr4::tree::ParseTree* get_parse_tree_integerLiteral(JavaLabeledParser *parser) {return parser->integerLiteral();}
antlr4::tree::ParseTree* get_parse_tree_floatLiteral(JavaLabeledParser *parser) {return parser->floatLiteral();}
antlr4::tree::ParseTree* get_parse_tree_altAnnotationQualifiedName(JavaLabeledParser *parser) {return parser->altAnnotationQualifiedName();}
antlr4::tree::ParseTree* get_parse_tree_annotation(JavaLabeledParser *parser) {return parser->annotation();}
antlr4::tree::ParseTree* get_parse_tree_elementValuePairs(JavaLabeledParser *parser) {return parser->elementValuePairs();}
antlr4::tree::ParseTree* get_parse_tree_elementValuePair(JavaLabeledParser *parser) {return parser->elementValuePair();}
antlr4::tree::ParseTree* get_parse_tree_elementValue(JavaLabeledParser *parser) {return parser->elementValue();}
antlr4::tree::ParseTree* get_parse_tree_elementValueArrayInitializer(JavaLabeledParser *parser) {return parser->elementValueArrayInitializer();}
antlr4::tree::ParseTree* get_parse_tree_annotationTypeDeclaration(JavaLabeledParser *parser) {return parser->annotationTypeDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_annotationTypeBody(JavaLabeledParser *parser) {return parser->annotationTypeBody();}
antlr4::tree::ParseTree* get_parse_tree_annotationTypeElementDeclaration(JavaLabeledParser *parser) {return parser->annotationTypeElementDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_annotationTypeElementRest(JavaLabeledParser *parser) {return parser->annotationTypeElementRest();}
antlr4::tree::ParseTree* get_parse_tree_annotationMethodOrConstantRest(JavaLabeledParser *parser) {return parser->annotationMethodOrConstantRest();}
antlr4::tree::ParseTree* get_parse_tree_annotationMethodRest(JavaLabeledParser *parser) {return parser->annotationMethodRest();}
antlr4::tree::ParseTree* get_parse_tree_annotationConstantRest(JavaLabeledParser *parser) {return parser->annotationConstantRest();}
antlr4::tree::ParseTree* get_parse_tree_defaultValue(JavaLabeledParser *parser) {return parser->defaultValue();}
antlr4::tree::ParseTree* get_parse_tree_block(JavaLabeledParser *parser) {return parser->block();}
antlr4::tree::ParseTree* get_parse_tree_blockStatement(JavaLabeledParser *parser) {return parser->blockStatement();}
antlr4::tree::ParseTree* get_parse_tree_localVariableDeclaration(JavaLabeledParser *parser) {return parser->localVariableDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_localTypeDeclaration(JavaLabeledParser *parser) {return parser->localTypeDeclaration();}
antlr4::tree::ParseTree* get_parse_tree_statement(JavaLabeledParser *parser) {return parser->statement();}
antlr4::tree::ParseTree* get_parse_tree_catchClause(JavaLabeledParser *parser) {return parser->catchClause();}
antlr4::tree::ParseTree* get_parse_tree_catchType(JavaLabeledParser *parser) {return parser->catchType();}
antlr4::tree::ParseTree* get_parse_tree_finallyBlock(JavaLabeledParser *parser) {return parser->finallyBlock();}
antlr4::tree::ParseTree* get_parse_tree_resourceSpecification(JavaLabeledParser *parser) {return parser->resourceSpecification();}
antlr4::tree::ParseTree* get_parse_tree_resources(JavaLabeledParser *parser) {return parser->resources();}
antlr4::tree::ParseTree* get_parse_tree_resource(JavaLabeledParser *parser) {return parser->resource();}
antlr4::tree::ParseTree* get_parse_tree_switchBlockStatementGroup(JavaLabeledParser *parser) {return parser->switchBlockStatementGroup();}
antlr4::tree::ParseTree* get_parse_tree_switchLabel(JavaLabeledParser *parser) {return parser->switchLabel();}
antlr4::tree::ParseTree* get_parse_tree_forControl(JavaLabeledParser *parser) {return parser->forControl();}
antlr4::tree::ParseTree* get_parse_tree_forInit(JavaLabeledParser *parser) {return parser->forInit();}
antlr4::tree::ParseTree* get_parse_tree_enhancedForControl(JavaLabeledParser *parser) {return parser->enhancedForControl();}
antlr4::tree::ParseTree* get_parse_tree_parExpression(JavaLabeledParser *parser) {return parser->parExpression();}
antlr4::tree::ParseTree* get_parse_tree_expressionList(JavaLabeledParser *parser) {return parser->expressionList();}
antlr4::tree::ParseTree* get_parse_tree_methodCall(JavaLabeledParser *parser) {return parser->methodCall();}
antlr4::tree::ParseTree* get_parse_tree_expression(JavaLabeledParser *parser) {return parser->expression();}
antlr4::tree::ParseTree* get_parse_tree_lambdaExpression(JavaLabeledParser *parser) {return parser->lambdaExpression();}
antlr4::tree::ParseTree* get_parse_tree_lambdaParameters(JavaLabeledParser *parser) {return parser->lambdaParameters();}
antlr4::tree::ParseTree* get_parse_tree_lambdaBody(JavaLabeledParser *parser) {return parser->lambdaBody();}
antlr4::tree::ParseTree* get_parse_tree_primary(JavaLabeledParser *parser) {return parser->primary();}
antlr4::tree::ParseTree* get_parse_tree_classType(JavaLabeledParser *parser) {return parser->classType();}
antlr4::tree::ParseTree* get_parse_tree_creator(JavaLabeledParser *parser) {return parser->creator();}
antlr4::tree::ParseTree* get_parse_tree_createdName(JavaLabeledParser *parser) {return parser->createdName();}
antlr4::tree::ParseTree* get_parse_tree_innerCreator(JavaLabeledParser *parser) {return parser->innerCreator();}
antlr4::tree::ParseTree* get_parse_tree_arrayCreatorRest(JavaLabeledParser *parser) {return parser->arrayCreatorRest();}
antlr4::tree::ParseTree* get_parse_tree_classCreatorRest(JavaLabeledParser *parser) {return parser->classCreatorRest();}
antlr4::tree::ParseTree* get_parse_tree_explicitGenericInvocation(JavaLabeledParser *parser) {return parser->explicitGenericInvocation();}
antlr4::tree::ParseTree* get_parse_tree_typeArgumentsOrDiamond(JavaLabeledParser *parser) {return parser->typeArgumentsOrDiamond();}
antlr4::tree::ParseTree* get_parse_tree_nonWildcardTypeArgumentsOrDiamond(JavaLabeledParser *parser) {return parser->nonWildcardTypeArgumentsOrDiamond();}
antlr4::tree::ParseTree* get_parse_tree_nonWildcardTypeArguments(JavaLabeledParser *parser) {return parser->nonWildcardTypeArguments();}
antlr4::tree::ParseTree* get_parse_tree_typeList(JavaLabeledParser *parser) {return parser->typeList();}
antlr4::tree::ParseTree* get_parse_tree_typeType(JavaLabeledParser *parser) {return parser->typeType();}
antlr4::tree::ParseTree* get_parse_tree_primitiveType(JavaLabeledParser *parser) {return parser->primitiveType();}
antlr4::tree::ParseTree* get_parse_tree_typeArguments(JavaLabeledParser *parser) {return parser->typeArguments();}
antlr4::tree::ParseTree* get_parse_tree_superSuffix(JavaLabeledParser *parser) {return parser->superSuffix();}
antlr4::tree::ParseTree* get_parse_tree_explicitGenericInvocationSuffix(JavaLabeledParser *parser) {return parser->explicitGenericInvocationSuffix();}
antlr4::tree::ParseTree* get_parse_tree_arguments(JavaLabeledParser *parser) {return parser->arguments();}

antlr4::tree::ParseTree* get_parse_tree(JavaLabeledParser *parser, const char *entry_rule_name) {
    static std::map<std::string, antlr4::tree::ParseTree* (*)(JavaLabeledParser*)> table
    {
        {"compilationUnit", &get_parse_tree_compilationUnit},
        {"packageDeclaration", &get_parse_tree_packageDeclaration},
        {"importDeclaration", &get_parse_tree_importDeclaration},
        {"typeDeclaration", &get_parse_tree_typeDeclaration},
        {"modifier", &get_parse_tree_modifier},
        {"classOrInterfaceModifier", &get_parse_tree_classOrInterfaceModifier},
        {"variableModifier", &get_parse_tree_variableModifier},
        {"classDeclaration", &get_parse_tree_classDeclaration},
        {"typeParameters", &get_parse_tree_typeParameters},
        {"typeParameter", &get_parse_tree_typeParameter},
        {"typeBound", &get_parse_tree_typeBound},
        {"enumDeclaration", &get_parse_tree_enumDeclaration},
        {"enumConstants", &get_parse_tree_enumConstants},
        {"enumConstant", &get_parse_tree_enumConstant},
        {"enumBodyDeclarations", &get_parse_tree_enumBodyDeclarations},
        {"interfaceDeclaration", &get_parse_tree_interfaceDeclaration},
        {"classBody", &get_parse_tree_classBody},
        {"interfaceBody", &get_parse_tree_interfaceBody},
        {"classBodyDeclaration", &get_parse_tree_classBodyDeclaration},
        {"memberDeclaration", &get_parse_tree_memberDeclaration},
        {"methodDeclaration", &get_parse_tree_methodDeclaration},
        {"methodBody", &get_parse_tree_methodBody},
        {"typeTypeOrVoid", &get_parse_tree_typeTypeOrVoid},
        {"genericMethodDeclaration", &get_parse_tree_genericMethodDeclaration},
        {"genericConstructorDeclaration", &get_parse_tree_genericConstructorDeclaration},
        {"constructorDeclaration", &get_parse_tree_constructorDeclaration},
        {"fieldDeclaration", &get_parse_tree_fieldDeclaration},
        {"interfaceBodyDeclaration", &get_parse_tree_interfaceBodyDeclaration},
        {"interfaceMemberDeclaration", &get_parse_tree_interfaceMemberDeclaration},
        {"constDeclaration", &get_parse_tree_constDeclaration},
        {"constantDeclarator", &get_parse_tree_constantDeclarator},
        {"interfaceMethodDeclaration", &get_parse_tree_interfaceMethodDeclaration},
        {"interfaceMethodModifier", &get_parse_tree_interfaceMethodModifier},
        {"genericInterfaceMethodDeclaration", &get_parse_tree_genericInterfaceMethodDeclaration},
        {"variableDeclarators", &get_parse_tree_variableDeclarators},
        {"variableDeclarator", &get_parse_tree_variableDeclarator},
        {"variableDeclaratorId", &get_parse_tree_variableDeclaratorId},
        {"variableInitializer", &get_parse_tree_variableInitializer},
        {"arrayInitializer", &get_parse_tree_arrayInitializer},
        {"classOrInterfaceType", &get_parse_tree_classOrInterfaceType},
        {"typeArgument", &get_parse_tree_typeArgument},
        {"qualifiedNameList", &get_parse_tree_qualifiedNameList},
        {"formalParameters", &get_parse_tree_formalParameters},
        {"formalParameterList", &get_parse_tree_formalParameterList},
        {"formalParameter", &get_parse_tree_formalParameter},
        {"lastFormalParameter", &get_parse_tree_lastFormalParameter},
        {"qualifiedName", &get_parse_tree_qualifiedName},
        {"literal", &get_parse_tree_literal},
        {"integerLiteral", &get_parse_tree_integerLiteral},
        {"floatLiteral", &get_parse_tree_floatLiteral},
        {"altAnnotationQualifiedName", &get_parse_tree_altAnnotationQualifiedName},
        {"annotation", &get_parse_tree_annotation},
        {"elementValuePairs", &get_parse_tree_elementValuePairs},
        {"elementValuePair", &get_parse_tree_elementValuePair},
        {"elementValue", &get_parse_tree_elementValue},
        {"elementValueArrayInitializer", &get_parse_tree_elementValueArrayInitializer},
        {"annotationTypeDeclaration", &get_parse_tree_annotationTypeDeclaration},
        {"annotationTypeBody", &get_parse_tree_annotationTypeBody},
        {"annotationTypeElementDeclaration", &get_parse_tree_annotationTypeElementDeclaration},
        {"annotationTypeElementRest", &get_parse_tree_annotationTypeElementRest},
        {"annotationMethodOrConstantRest", &get_parse_tree_annotationMethodOrConstantRest},
        {"annotationMethodRest", &get_parse_tree_annotationMethodRest},
        {"annotationConstantRest", &get_parse_tree_annotationConstantRest},
        {"defaultValue", &get_parse_tree_defaultValue},
        {"block", &get_parse_tree_block},
        {"blockStatement", &get_parse_tree_blockStatement},
        {"localVariableDeclaration", &get_parse_tree_localVariableDeclaration},
        {"localTypeDeclaration", &get_parse_tree_localTypeDeclaration},
        {"statement", &get_parse_tree_statement},
        {"catchClause", &get_parse_tree_catchClause},
        {"catchType", &get_parse_tree_catchType},
        {"finallyBlock", &get_parse_tree_finallyBlock},
        {"resourceSpecification", &get_parse_tree_resourceSpecification},
        {"resources", &get_parse_tree_resources},
        {"resource", &get_parse_tree_resource},
        {"switchBlockStatementGroup", &get_parse_tree_switchBlockStatementGroup},
        {"switchLabel", &get_parse_tree_switchLabel},
        {"forControl", &get_parse_tree_forControl},
        {"forInit", &get_parse_tree_forInit},
        {"enhancedForControl", &get_parse_tree_enhancedForControl},
        {"parExpression", &get_parse_tree_parExpression},
        {"expressionList", &get_parse_tree_expressionList},
        {"methodCall", &get_parse_tree_methodCall},
        {"expression", &get_parse_tree_expression},
        {"lambdaExpression", &get_parse_tree_lambdaExpression},
        {"lambdaParameters", &get_parse_tree_lambdaParameters},
        {"lambdaBody", &get_parse_tree_lambdaBody},
        {"primary", &get_parse_tree_primary},
        {"classType", &get_parse_tree_classType},
        {"creator", &get_parse_tree_creator},
        {"createdName", &get_parse_tree_createdName},
        {"innerCreator", &get_parse_tree_innerCreator},
        {"arrayCreatorRest", &get_parse_tree_arrayCreatorRest},
        {"classCreatorRest", &get_parse_tree_classCreatorRest},
        {"explicitGenericInvocation", &get_parse_tree_explicitGenericInvocation},
        {"typeArgumentsOrDiamond", &get_parse_tree_typeArgumentsOrDiamond},
        {"nonWildcardTypeArgumentsOrDiamond", &get_parse_tree_nonWildcardTypeArgumentsOrDiamond},
        {"nonWildcardTypeArguments", &get_parse_tree_nonWildcardTypeArguments},
        {"typeList", &get_parse_tree_typeList},
        {"typeType", &get_parse_tree_typeType},
        {"primitiveType", &get_parse_tree_primitiveType},
        {"typeArguments", &get_parse_tree_typeArguments},
        {"superSuffix", &get_parse_tree_superSuffix},
        {"explicitGenericInvocationSuffix", &get_parse_tree_explicitGenericInvocationSuffix},
        {"arguments", &get_parse_tree_arguments}
    };

    auto entry = table.find(entry_rule_name);
    if (entry != table.end()) {
        return (*(entry->second))(parser);
    } else {
        PyErr_SetString(PyExc_ValueError, "Invalid entry_rule_name");
        throw speedy_antlr::PythonException();
    }
}

/*
 * Python function prototype:
 *  do_parse(
 *      parser_cls:antlr4.Parser,
 *      stream:antlr4.InputStream,
 *      entry_rule_name:str,
 *      sa_err_listener:SA_ErrorListener
 *  )
 */
PyObject* do_parse(PyObject *self, PyObject *args) {
    PyObject *strdata = NULL;
    PyObject *result = NULL;
    PyObject *token_module = NULL;

    try {
        // Get args
        PyObject *parser_cls = NULL;
        PyObject *stream = NULL;
        const char *entry_rule_name = NULL;
        PyObject *sa_err_listener = NULL;
        if(!PyArg_ParseTuple(args,
            "OOsO:do_parse",
            &parser_cls, &stream, &entry_rule_name, &sa_err_listener
        )) {
            return NULL;
        }

        // Extract input stream's string
        const char *cstrdata;
        Py_ssize_t bufsize;
        strdata = PyObject_GetAttrString(stream, "strdata");
        if(!strdata) throw speedy_antlr::PythonException();
        cstrdata = PyUnicode_AsUTF8AndSize(strdata, &bufsize);
        if(!cstrdata) throw speedy_antlr::PythonException();

        // Create an antlr InputStream object
        antlr4::ANTLRInputStream cpp_stream(cstrdata, bufsize);

        // in case error listener is overridden
        token_module = PyImport_ImportModule("antlr4.Token");
        if(!token_module) throw speedy_antlr::PythonException();
        speedy_antlr::Translator translator(parser_cls, stream);
        speedy_antlr::ErrorTranslatorListener err_listener(&translator, sa_err_listener);

        // Lex
        JavaLabeledLexer lexer(&cpp_stream);
        if(sa_err_listener != Py_None){
            lexer.removeErrorListeners();
            lexer.addErrorListener(&err_listener);
        }
        antlr4::CommonTokenStream token_stream(&lexer);
        token_stream.fill();

        // Parse
        JavaLabeledParser parser(&token_stream);
        if(sa_err_listener != Py_None){
            parser.removeErrorListeners();
            parser.addErrorListener(&err_listener);
        }
        antlr4::tree::ParseTree *parse_tree;
        parse_tree = get_parse_tree(&parser, entry_rule_name);

        // Translate Parse tree to Python
        SA_JavaLabeledTranslator visitor(&translator);
        result = visitor.visit(parse_tree).as<PyObject *>();

        // Clean up data
        Py_XDECREF(token_module);
        Py_XDECREF(strdata);

        return result;

    } catch(speedy_antlr::PythonException &e) {
        Py_XDECREF(token_module);
        Py_XDECREF(strdata);
        Py_XDECREF(result);

        // Python exception already has error indicator set
        return NULL;
    } catch(...) {
        Py_XDECREF(token_module);
        Py_XDECREF(strdata);
        Py_XDECREF(result);

        // An internal C++ exception was thrown.
        // Set error indicator to a generic runtime error
        PyErr_SetString(PyExc_RuntimeError, "Internal error");
        return NULL;
    }
}


extern "C" {

    static PyObject* c_do_parse(PyObject *self, PyObject *args) {
        return do_parse(self, args);
    }

    static PyMethodDef methods[] = {
        {
            "do_parse",  c_do_parse, METH_VARARGS,
            "Run parser"
        },
        {NULL, NULL, 0, NULL} /* Sentinel */
    };

    static struct PyModuleDef module = {
        PyModuleDef_HEAD_INIT,
        "sa_javalabeled_cpp_parser",   /* name of module */
        NULL, /* module documentation, may be NULL */
        -1,       /* size of per-interpreter state of the module,
                    or -1 if the module keeps state in global variables. */
        methods
    };
}


PyMODINIT_FUNC
PyInit_sa_javalabeled_cpp_parser(void) {
    PyObject *m = PyModule_Create(&module);
    return m;
}