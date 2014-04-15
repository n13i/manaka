extern int SURFACE_ANIMATION_BLINK;
extern int SURFACE_ANIMATION_TALK;


void Surface_debug();

void Surface_init();
int Surface_load(string path);

void Surface_setTargetWindow(string winname);
void Surface_showImageSet(string name);

void Surface_playAnimation(int anim_id);
void Surface_stopAnimation(int anim_id);
void Surface_stopAllAnimations();
boolean Surface_isAnimationPlaying(int anim_id);
