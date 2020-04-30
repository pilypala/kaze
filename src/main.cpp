// #include <iostream>
// #include <vector>
// #include <string>
// #include <QDebug>

// using namespace std;

// int main()
// {
//     qDebug() << "Hello";
//     return 0;

//     // vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
//     // for (const string& word : msg)
//     // {
//     //     cout << word << " ";
//     // }
//     // cout << endl;
// }


#include <QApplication>
#include <QQmlApplicationEngine>
#include <QDebug>

int main(int argc, char** argv)
{
    qDebug() << "Hello World!"; 
    return 0;
    QApplication app(argc, argv);
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));
    return app.exec();
}