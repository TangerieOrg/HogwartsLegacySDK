#pragma once
#include <cstdint>
#include "ABP_Sanc_HubCornerBookshelfs_03_C.hpp"
class UDeferredChildActorComponent;
class UStaticMeshComponent;
class UTransformationFxInfoComponent;
#pragma pack(push, 1)
class ABP_Sanc_HubCornerBookshelfs_03_Dwiz_C : public ABP_Sanc_HubCornerBookshelfs_03_C {
public:
    UDeferredChildActorComponent* Deferred_Books01; // 0x2e8
    UDeferredChildActorComponent* Deferred_Dressing05; // 0x2f0
    UDeferredChildActorComponent* Deferred_Dressing04; // 0x2f8
    UDeferredChildActorComponent* Deferred_Dressing03; // 0x300
    UDeferredChildActorComponent* Deferred_Dressing02; // 0x308
    UDeferredChildActorComponent* Deferred_Dressing01; // 0x310
    UStaticMeshComponent* SM_Sanc_FloatingBookshelf_12_Dwiz; // 0x318
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz2; // 0x320
    UStaticMeshComponent* SM_Sanc_FloatingBookshelf_04_Dwiz1; // 0x328
    UTransformationFxInfoComponent* TransformationFxInfo; // 0x330
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz3; // 0x338
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz1; // 0x340
    static ABP_Sanc_HubCornerBookshelfs_03_Dwiz_C* StaticClass();
}; // Size: 0x348
#pragma pack(pop)
