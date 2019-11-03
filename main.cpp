#include "mainwindow.h"
#include "text.h"

#include <QApplication>
#include <QDebug>

int main( int argc, char *argv[] )
{
  QStringList list = { "The hallway smelt of boiled cabbage and old rag mats. At one end of it a coloured poster, too large for indoor display, had been tacked to the wall. It depicted simply an enormous face, more than a metre wide: the face of a man of about forty-five, with a heavy black moustache and ruggedly handsome features. Winston made for the stairs. It was no use trying the lift. Even at the best of times it was seldom working, and at present the electric current was cut off during daylight hours. It was part of the economy drive in preparation for Hate Week. The flat was seven flights up, and Winston, who was thirty-nine and had a varicose ulcer above his right ankle, went slowly, resting several times on the way. On each landing, opposite the lift-shaft, the poster with the enormous face gazed from the wall. It was one of those pictures which are so contrived that the eyes follow you about when you move. BIG BROTHER IS WATCHING YOU, the caption beneath it ran.\n\n Inside the flat a fruity voice was reading out a list of figures which had something to do with the production of pig-iron. The voice came from an oblong metal plaque like a dulled mirror which formed part of the surface of the right-hand wall. Winston turned a switch and the voice sank somewhat, though the words were still distinguishable. The instrument (the telescreen, it was called) could be dimmed, but there was no way of shutting it off completely. He moved over to the window: a smallish, frail figure, the meagreness of his body merely emphasized by the blue overalls which were the uniform of the party. His hair was very fair, his face naturally sanguine, his skin roughened by coarse soap and blunt razor blades and the cold of the winter that had just ended.",
  " - Good morning! Can I see Mr. Watson, please?\n"
  " - Good morning, sir.Do you have an appointment ?\n"
  " -Yes, I have an appointment at 10 o’clock.My name is Sam Johnson.\n"
  " - That’s right, Mr.Johnson.May I take your coat, please ?\n"
  " -Thank you.Here you are.Is Mr.Watson in his office ?\n"
  " -Would you like to take a seat ? I’ll see if he is available.\n"
  " - Sure.\n"
  " - Well.Would you mind waiting a little, please? Mr.Watson is having an important international phone call at the moment.He won’t be long.But I can offer you to see his assistant if you’re in a hurry.\n"
  " - I don’t think so.I ne\ned to\n see Mr.Watson personally.\n"
  " - Can I offer you a cup of tea or coffee while you are waiting.\n"
  " -Tea would be nice, thank you.I’m sorry but is there a smoking - room here on the floor ?\n"
  " -No, smoking is not allowed in the building.I’m afraid you can do that outside only.\n"
  " - OK.No problem.\n"
  " - Here is your tea.Please, help yourself to the cookies.\n"
  " - Thank you very much.\n"
  " - Well.Please, call me if you need anything.And I’ll let you know when Mr.Watson is free." };
  qDebug() << "Before:";
  for (auto it = list.begin(); it != list.end(); it++)
  {
    qDebug() << *it;
  }
  qDebug() << "\n\n";
  Text text;
  text.SetLength( 80 );
  text.SetPlainText( list );

  text.SetFileName( "text.txt" );
  text.WriteFile();

  Text text_copy;
  text_copy.SetLength( 80 );
  text_copy.SetFileName( "text.txt" );
  text_copy.ReadFile();

  qDebug() << "Equal?" << (text_copy == text) << "\n";


  QApplication a( argc, argv );
  MainWindow w;
  w.show();
  return a.exec();
}
