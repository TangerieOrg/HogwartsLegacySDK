#include "UGameInstanceSubsystem.hpp"
#include "USubsystem.hpp"
UGameInstanceSubsystem* UGameInstanceSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GameInstanceSubsystem");
    return (UGameInstanceSubsystem*)res;
}
