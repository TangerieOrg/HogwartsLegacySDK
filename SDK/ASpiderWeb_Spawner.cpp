#include "AActor.hpp"
#include "ADynamicObjectVolume.hpp"
#include "ASpiderWeb_Spawner.hpp"
#include "FHitResult.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ASpiderWeb_Spawner::SetSpawner(ADynamicObjectVolume* newSpawner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spawner.SetSpawner"));
    struct Params_SetSpawner {
        ADynamicObjectVolume* newSpawner; // 0x0
    }; // Size: 0x8
    Params_SetSpawner params{};
    params.newSpawner = (ADynamicObjectVolume*)newSpawner;
    ProcessEvent(func, &params);
}
ASpiderWeb_Spawner* ASpiderWeb_Spawner::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpiderWeb_Spawner");
    return (ASpiderWeb_Spawner*)res;
}
bool ASpiderWeb_Spawner::WebThaw() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spawner.WebThaw"));
    struct Params_WebThaw {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_WebThaw params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASpiderWeb_Spawner::WebHit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spawner.WebHit"));
    struct Params_WebHit {
    }; // Size: 0x0
    Params_WebHit params{};
    ProcessEvent(func, &params);
}
bool ASpiderWeb_Spawner::OnSpawnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spawner.OnSpawnOverlapEnd"));
    struct Params_OnSpawnOverlapEnd {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_OnSpawnOverlapEnd params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASpiderWeb_Spawner::WebFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spawner.WebFreeze"));
    struct Params_WebFreeze {
    }; // Size: 0x0
    Params_WebFreeze params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spawner::WebBurn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spawner.WebBurn"));
    struct Params_WebBurn {
    }; // Size: 0x0
    Params_WebBurn params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spawner::SpawnSpiders() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spawner.SpawnSpiders"));
    struct Params_SpawnSpiders {
    }; // Size: 0x0
    Params_SpawnSpiders params{};
    ProcessEvent(func, &params);
}
bool ASpiderWeb_Spawner::OnSpawnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spawner.OnSpawnOverlapBegin"));
    struct Params_OnSpawnOverlapBegin {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
        bool ReturnValue; // 0xa8
    }; // Size: 0xa9
    Params_OnSpawnOverlapBegin params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
    return (bool)params.ReturnValue;
}
bool ASpiderWeb_Spawner::IsSpider(AActor* checkActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spawner.IsSpider"));
    struct Params_IsSpider {
        AActor* checkActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsSpider params{};
    params.checkActor = (AActor*)checkActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTransform ASpiderWeb_Spawner::GetRelativeTransform(UStaticMeshComponent* StaticMesh, FVector FireLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spawner.GetRelativeTransform"));
    struct Params_GetRelativeTransform {
        UStaticMeshComponent* StaticMesh; // 0x0
        FVector FireLocation; // 0x8
        char pad_14[0xc];
        FTransform ReturnValue; // 0x20
    }; // Size: 0x50
    Params_GetRelativeTransform params{};
    params.StaticMesh = (UStaticMeshComponent*)StaticMesh;
    params.FireLocation = (FVector)FireLocation;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
