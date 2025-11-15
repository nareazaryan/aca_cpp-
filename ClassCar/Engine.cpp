#include "Engine.h"

Engine::Engine() : e_type("Unknown"), e_horsepower(0), e_volume(0.0) {}

Engine::Engine(string type, int hp, double volume)
    : e_type(type), e_horsepower(hp), e_volume(volume) {}

Engine::~Engine() {}

void Engine::ShowEngine() const {
    cout << "Engine Type: " << e_type << endl;
    cout << "Horsepower: " << e_horsepower << endl;
    cout << "Volume: " << e_volume << endl;
}
