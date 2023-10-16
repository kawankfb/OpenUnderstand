from multiprocessing import cpu_count, Pool, freeze_support
from ounderstand.parsing_process import process_file, get_files


def runner(path_project: str = "D:\\PHD\\OpenUnderstand-dev\\OpenUnderstand-dev\\benchmark"):
    files = get_files(path_project)
    for item in files:
        process_file(item)