#include <irrKlang.h>

using namespace irrklang;

ISoundEngine* SoundEngine = createIrrKlangDevice();

void sonido()
{
    SoundEngine->play2D("audio/breakout.mp3", true);
}