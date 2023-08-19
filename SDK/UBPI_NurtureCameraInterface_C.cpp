#include "UBPI_NurtureCameraInterface_C.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UBPI_NurtureCameraInterface_C* UBPI_NurtureCameraInterface_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Nurturing/BPI_NurtureCameraInterface.BPI_NurtureCameraInterface_C");
    return (UBPI_NurtureCameraInterface_C*)res;
}
void UBPI_NurtureCameraInterface_C::OnDisableCamera(bool ReturnToPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/BPI_NurtureCameraInterface.BPI_NurtureCameraInterface_C.OnDisableCamera"));
    struct Params_OnDisableCamera {
        bool ReturnToPlayer; // 0x0
    }; // Size: 0x1
    Params_OnDisableCamera params{};
    params.ReturnToPlayer = (bool)ReturnToPlayer;
    ProcessEvent(func, &params);
}
void UBPI_NurtureCameraInterface_C::OnEnableCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/BPI_NurtureCameraInterface.BPI_NurtureCameraInterface_C.OnEnableCamera"));
    struct Params_OnEnableCamera {
    }; // Size: 0x0
    Params_OnEnableCamera params{};
    ProcessEvent(func, &params);
}
