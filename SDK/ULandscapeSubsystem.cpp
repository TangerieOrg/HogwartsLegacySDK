#include "ULandscapeSubsystem.hpp"
#include "UTickableWorldSubsystem.hpp"
ULandscapeSubsystem* ULandscapeSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeSubsystem");
    return (ULandscapeSubsystem*)res;
}
