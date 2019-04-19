import __init__

from __init__ import db, app

with app.app_context():
    db.init_app(app)
    db.create_all()
exit()