#include "FVector.hpp"
#include "UClass.hpp"
#include "UDataAsset.hpp"
#include "UEnemy_TombProtector_QBUpdateDataAsset.hpp"
UEnemy_TombProtector_QBUpdateDataAsset* UEnemy_TombProtector_QBUpdateDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_TombProtector_QBUpdateDataAsset");
    return (UEnemy_TombProtector_QBUpdateDataAsset*)res;
}
