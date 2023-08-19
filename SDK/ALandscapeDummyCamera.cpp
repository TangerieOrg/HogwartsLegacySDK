#include "AActor.hpp"
#include "ALandscapeDummyCamera.hpp"
ALandscapeDummyCamera* ALandscapeDummyCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaRenderTech.LandscapeDummyCamera");
    return (ALandscapeDummyCamera*)res;
}
