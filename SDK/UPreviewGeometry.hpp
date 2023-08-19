#pragma once
#include <cstdint>
#include "UObject.hpp"
class APreviewGeometryActor;
class UMaterialInterface;
struct FTransform;
class ULineSetComponent;
class UWorld;
#pragma pack(push, 1)
class UPreviewGeometry : public UObject {
public:
    APreviewGeometryActor* ParentActor; // 0x28
    char pad_30[0x50];
    static UPreviewGeometry* StaticClass();
    bool SetLineSetVisibility(FString LineSetIdentifier, bool bVisible);
    bool SetLineSetMaterial(FString LineSetIdentifier, UMaterialInterface* NewMaterial);
    void SetAllLineSetsMaterial(UMaterialInterface* Material);
    bool RemoveLineSet(FString LineSetIdentifier, bool bDestroy);
    void RemoveAllLineSets(bool bDestroy);
    APreviewGeometryActor* GetActor();
    ULineSetComponent* FindLineSet(FString LineSetIdentifier);
    void Disconnect();
    void CreateInWorld(UWorld* World, FTransform& WithTransform);
    ULineSetComponent* AddLineSet(FString LineSetIdentifier);
}; // Size: 0x80
#pragma pack(pop)
