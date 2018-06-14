#include "buzzer.h"


const static tone_t tones[] = {
    {LA3,Q},
    {LA3,Q},
    {LA3,Q},
    {F3,E+S},
    {C4,S},

    {LA3,Q},
    {F3,E+S},
    {C4,S},
    {LA3,H},

    {E4,Q},
    {E4,Q},
    {E4,Q},
    {F4,E+S},
    {C4,S},

    {Ab3,Q},
    {F3,E+S},
    {C4,S},
    {LA3,H},

    {LA4,Q},
    {LA3,E+S},
    {LA3,S},
    {LA4,Q},
    {Ab4,E+S},
    {G4,S},

    {Gb4,S},
    {E4,S},
    {F4,E},

    {0,E},//PAUSE QUASI FINE RIGA
    {F3,E},
    {Ab3,Q},
    {F3,E+S},
    {LA3,S},

    {C4,Q},
    {LA3,E+S},
    {C4,S},
    {E4,H},

    {LA4,Q},
    {LA3,E+S},
    {LA3,S},
    {LA4,Q},
    {Ab4,E+S},
    {G4,S},

    {Gb4,S},
    {E4,S},
    {F4,E},
    {0,E},//PAUSE
    {Bb3,E},
    {Eb4,Q},
    {D4,E+S},
    {Db4,S},

    {C4,S},
    {B3,S},
    {C4,E},
    {0,E},//PAUSE QUASI FINE RIGA
    {F3,E},
    {Ab3,Q},
    {F3,E+S},
    {C4,S},

    {LA3,Q},
    {F3,E+S},
    {C4,S},
    {LA3,H},
    {0,2*E}

};

void app_main()
{
    app_buzzer_cfg();
    for(int i=0; i<sizeof(tones)/sizeof(tone_t); i++)
    {
        bz_tone(tones[i].freq, tones[i].dur);
    }
}


