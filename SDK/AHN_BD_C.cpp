#include "AHN_BD_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BD_C* AHN_BD_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/HOG/HN_BD.HN_BD_C");
    return (AHN_BD_C*)res;
}
