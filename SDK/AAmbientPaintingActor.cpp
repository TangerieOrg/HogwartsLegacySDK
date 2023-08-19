#include "AActor.hpp"
#include "AAmbientPaintingActor.hpp"
#include "FDataTableRowHandle.hpp"
#include "UBinkMediaPlayer.hpp"
#include "UDataTable.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UPhysicalResponseComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
AAmbientPaintingActor* AAmbientPaintingActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AmbientPaintingActor");
    return (AAmbientPaintingActor*)res;
}
