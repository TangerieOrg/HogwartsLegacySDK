#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "USceneActionState_ClothOptions.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_ClothOptions* USceneActionState_ClothOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_ClothOptions");
    return (USceneActionState_ClothOptions*)res;
}
FVector2D USceneActionState_ClothOptions::GetPreviousAnimDriveStiffness() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_ClothOptions.GetPreviousAnimDriveStiffness"));
    struct Params_GetPreviousAnimDriveStiffness {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPreviousAnimDriveStiffness params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
