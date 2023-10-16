from openunderstand.oudb.api import open as db_open

db = db_open("D:\PHD\OpenUnderstand-dev\OpenUnderstand-dev\database.oudb")

print(len(db.ents("class")))