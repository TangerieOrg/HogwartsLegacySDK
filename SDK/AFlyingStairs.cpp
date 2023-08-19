#include "AActor.hpp"
#include "AFlyingStairs.hpp"
#include "AFlyingStairsChain.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
AFlyingStairs* AFlyingStairs::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingStairs");
    return (AFlyingStairs*)res;
}
void AFlyingStairs::DestroyRandomStairChain() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingStairs.DestroyRandomStairChain"));
    struct Params_DestroyRandomStairChain {
    }; // Size: 0x0
    Params_DestroyRandomStairChain params{};
    ProcessEvent(func, &params);
}
void AFlyingStairs::BuildRandomStairChain() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingStairs.BuildRandomStairChain"));
    struct Params_BuildRandomStairChain {
    }; // Size: 0x0
    Params_BuildRandomStairChain params{};
    ProcessEvent(func, &params);
}
