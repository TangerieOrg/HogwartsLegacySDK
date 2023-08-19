#include "FVector.hpp"
#include "UEnemy_QBUpdate.hpp"
#include "UEnemy_TombProtector_QBUpdate.hpp"
#include "UEnemy_TombProtector_QBUpdateDataAsset.hpp"
#include "UFunction.hpp"
void UEnemy_TombProtector_QBUpdate::SetSpawnPoints(TArray<FVector>& InLocArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_TombProtector_QBUpdate.SetSpawnPoints"));
    struct Params_SetSpawnPoints {
        TArray<FVector> InLocArray; // 0x0
    }; // Size: 0x10
    Params_SetSpawnPoints params{};
    params.InLocArray = (TArray<FVector>)InLocArray;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InLocArray = params.InLocArray;
}
UEnemy_TombProtector_QBUpdate* UEnemy_TombProtector_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_TombProtector_QBUpdate");
    return (UEnemy_TombProtector_QBUpdate*)res;
}
void UEnemy_TombProtector_QBUpdate::SetSpawnAnchor(FVector& InLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_TombProtector_QBUpdate.SetSpawnAnchor"));
    struct Params_SetSpawnAnchor {
        FVector InLoc; // 0x0
    }; // Size: 0xc
    Params_SetSpawnAnchor params{};
    params.InLoc = (FVector)InLoc;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InLoc = params.InLoc;
}
void UEnemy_TombProtector_QBUpdate::SetDataAsset(UEnemy_TombProtector_QBUpdateDataAsset* InDataAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_TombProtector_QBUpdate.SetDataAsset"));
    struct Params_SetDataAsset {
        UEnemy_TombProtector_QBUpdateDataAsset* InDataAsset; // 0x0
    }; // Size: 0x8
    Params_SetDataAsset params{};
    params.InDataAsset = (UEnemy_TombProtector_QBUpdateDataAsset*)InDataAsset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
