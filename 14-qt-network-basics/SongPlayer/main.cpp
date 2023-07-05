#include <QGuiApplication>
#include <QIcon>
#include <QQmlApplicationEngine>
#include "PlayerController.h"
#include "AudioSearchModel.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    app.setWindowIcon(QIcon(":/SongPlayer/assets/icons/app_icon.ico"));

    QQmlApplicationEngine engine;

    PlayerController *playerController = new PlayerController(&app);
    qmlRegisterSingletonInstance("com.company.PlayerController", 1, 0, "PlayerController", playerController);

    AudioSearchModel *audioSearchModel = new AudioSearchModel(&app);
    qmlRegisterSingletonInstance("com.company.AudioSearchModel", 1, 0, "AudioSearchModel", audioSearchModel);

    const QUrl url(u"qrc:/SongPlayer/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
