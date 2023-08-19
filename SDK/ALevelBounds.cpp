#include "AActor.hpp"
#include "ALevelBounds.hpp"
#include "UBoxComponent.hpp"
ALevelBounds* ALevelBounds::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LevelBounds");
    return (ALevelBounds*)res;
}
