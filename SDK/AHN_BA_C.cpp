#include "AHN_BA_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BA_C* AHN_BA_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/HOG/HN_BA.HN_BA_C");
    return (AHN_BA_C*)res;
}
