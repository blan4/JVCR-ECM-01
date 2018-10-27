#ifndef JVCR_ECM_01_MACHINE_H
#define JVCR_ECM_01_MACHINE_H

#include <jvcr_ecm_01/types.h>
#include <jvcr_ecm_01/consts.h>

/**
 * This structure contains openGL info
 */
typedef struct JvcrDisplay {
  byte *texture;
  byte texture_id;
} JvcrDisplay;

typedef struct JvcrRam {
  byte *memory;
} JvcrRam;

typedef struct Jvcr {
  JvcrRam *ram;
  JvcrDisplay *display;
} Jvcr;

Jvcr* NewJvcr();
void DestroyJvcr(Jvcr*);

JvcrRam* NewJvcrRam();
void DestroyJvcrRam(JvcrRam*);

JvcrDisplay* NewJvcrDisplay();
void DestroyJvcrDisplay(JvcrDisplay*);


void Draw(Jvcr *);

void OnInit(Jvcr *); // Called once on program startup
void OnDestroy(Jvcr *); // Called once on program just before it's been destroyed
void OnUpdate(Jvcr *); // called once per update at 30fps
void OnUpdate60(Jvcr *);// called once per update at 60fps
void OnDraw(Jvcr *); // called once per visible frame

#endif //JVCR_ECM_01_MACHINE_H