#include "rack.hpp"

using namespace rack;

extern Plugin *pluginInstance;

extern Model *modelSmoke;
extern Model *modelAnnuli;
extern Model *modelCornrowsX;
extern Model *modelSplash;

extern Model *modelAbr;
extern Model *modelAux;
extern Model *modelBalaclava;
extern Model *modelBandana;
extern Model *modelBlank16HP;
extern Model *modelBlank1HP;
extern Model *modelBlank2HP;
extern Model *modelBlank42HP;
extern Model *modelBlank4HP;
extern Model *modelBlank8HP;
extern Model *modelBut;
extern Model *modelDeuxEtageres;
extern Model *modelEtagere;
extern Model *modelFalls;
extern Model *modelFtagn;
extern Model *modelFuse;
extern Model *modelGnome;
extern Model *modelPiste;
extern Model *modelPulse;
extern Model *modelRakes;
extern Model *modelRiemann;
extern Model *modelSnake;
extern Model *modelSns;
extern Model *modelSssh;
extern Model *modelWriggle;

// GUI COMPONENTS

struct sp_Port : app::SvgPort {
  sp_Port() {
    setSvg(APP->window->loadSvg(asset::plugin(pluginInstance, "res/sp-Port20.svg")));
  }
};

struct sp_Switch : app::SvgSwitch {
  sp_Switch() {
    addFrame(APP->window->loadSvg(asset::plugin(pluginInstance, "res/sp-switchv_0.svg")));
    addFrame(APP->window->loadSvg(asset::plugin(pluginInstance, "res/sp-switchv_1.svg")));
  }
};

struct sp_Encoder : app::SvgKnob {
  sp_Encoder() {
    minAngle = -1.0f * M_PI;
    maxAngle = 1.0f * M_PI;
    setSvg(APP->window->loadSvg(asset::plugin(pluginInstance, "res/sp-encoder.svg")));
    //sw->svg = APP->window->loadSvg(asset::plugin(pluginInstance, "res/sp-encoder.svg"));
    //sw->wrap();
    //box.size = sw->box.size;
  }
};

struct sp_BlackKnob : app::SvgKnob {
  sp_BlackKnob() {
    minAngle = -0.83 * M_PI;
    maxAngle = 0.83 * M_PI;
    setSvg(APP->window->loadSvg(asset::plugin(pluginInstance, "res/sp-knobBlack.svg")));
    //sw->svg = APP->window->loadSvg(asset::plugin(pluginInstance, "res/sp-knobBlack.svg"));
    //sw->wrap();
    //box.size = Vec(32,32);
  }
};

struct sp_SmallBlackKnob : app::SvgKnob {
  sp_SmallBlackKnob() {
    minAngle = -0.83 * M_PI;
    maxAngle = 0.83 * M_PI;
    setSvg(APP->window->loadSvg(asset::plugin(pluginInstance, "res/sp-knobBlack.svg")));
    //sw->svg = APP->window->loadSvg(asset::plugin(pluginInstance, "res/sp-knobBlack.svg"));
    //sw->wrap();
    //box.size = Vec(20,20);
  }
};

struct sp_Trimpot : app::SvgKnob {
  sp_Trimpot() {
    minAngle = -0.83 * M_PI;
    maxAngle = 0.83 * M_PI;
    setSvg(APP->window->loadSvg(asset::plugin(pluginInstance, "res/sp-trimpotBlack.svg")));
    //sw->svg = APP->window->loadSvg(asset::plugin(pluginInstance, "res/sp-knobBlack.svg"));
    //sw->wrap();
    //box.size = Vec(18,18);
  }
};
