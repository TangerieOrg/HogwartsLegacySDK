#include "UFunction.hpp"
#include "UModLoaderSave_C.hpp"
#include "USaveGame.hpp"
UModLoaderSave_C* UModLoaderSave_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/CustomContent/ModloaderAssets/ModLoaderSave.ModLoaderSave_C");
    return (UModLoaderSave_C*)res;
}
void UModLoaderSave_C::Convert() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderSave.ModLoaderSave_C.Convert"));
    struct Params_Convert {
    }; // Size: 0x0
    Params_Convert params{};
    ProcessEvent(func, &params);
}
void UModLoaderSave_C::Ver1ToVer2(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, int32_t CallFunc_Array_Length_ReturnValue) {}
