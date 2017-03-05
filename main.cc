
#include <iostream>

#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QSizePolicy>
#include <QFont>

int main(int argc, char **argv) {

  QApplication a(argc, argv);

  QWidget w;
  w.resize(500, 40);

  QVBoxLayout vlayout;

  QLineEdit edit;
  edit.setSizePolicy(QSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum));
  //edit.setHeight(50);
  QFont edit_font("Timers", 32, QFont::Light);
  edit_font.setHintingPreference(QFont::PreferNoHinting);
  //edit_font.setStretch(QFont::UltraExpanded);
  //edit_font.setStyle(QFont::StyleNormal);
  edit_font.setStyleHint(QFont::System);
  edit_font.setLetterSpacing(QFont::AbsoluteSpacing, 0);
  edit.setFont(edit_font);
  edit.setTextMargins(10, 0, 0, 0);

  vlayout.addWidget(&edit);

  w.setLayout(&vlayout);
  w.show();

  return a.exec();
}
