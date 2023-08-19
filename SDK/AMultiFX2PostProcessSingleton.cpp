#include "AActor.hpp"
#include "AMultiFX2PostProcessSingleton.hpp"
#include "UMultiFX2PostProcessComponent.hpp"
AMultiFX2PostProcessSingleton* AMultiFX2PostProcessSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2PostProcessSingleton");
    return (AMultiFX2PostProcessSingleton*)res;
}
