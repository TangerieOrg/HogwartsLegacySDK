#include "AActor.hpp"
#include "AMapDungeonActor.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FLinearColor.hpp"
#include "UMapDungeonComponent.hpp"
#include "UMaterial.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
AMapDungeonActor* AMapDungeonActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapDungeonActor");
    return (AMapDungeonActor*)res;
}
