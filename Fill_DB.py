from openunderstand.oudb.api import create_db
from openunderstand.oudb.fill import fill
from openunderstand.ounderstand.runner import runner

if __name__ == '__main__':
    create_db(
        dbname="D:\\PHD\\OpenUnderstand-dev\\OpenUnderstand-dev\\database.oudb",  # customize the path
        project_dir="D:\\PHD\OpenUnderstand-dev\\OpenUnderstand-dev\\benchmark\\calculator_app"  # customize the path
    )
    fill()
    runner("D:\\PHD\OpenUnderstand-dev\\OpenUnderstand-dev\\benchmark\\calculator_app")