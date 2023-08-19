#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "E_DeadNPC_Type\Type.hpp"
#include "FSoftClassPath.hpp"
#include "FTransform.hpp"
class UChildActorComponent;
class USceneComponent;
class UClass;
#pragma pack(push, 1)
class ABP_DeadNPC_Spawner_C : public AActor {
public:
    UChildActorComponent* Dead_NPC_Dressing; // 0x248
    UChildActorComponent* Dead_NPC_Body; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    E_DeadNPC_Type::Type DeadNPC_Selection; // 0x260
    char pad_261[0x7];
    UClass* DeadNPC_BodyType; // 0x268
    UClass* DeadNPC_DressingType; // 0x270
    int32_t LootLevel; // 0x278
    char pad_27c[0x54];
    TArray<FSoftClassPath> DeadNPCBodyRefList; // 0x2d0
    TArray<FSoftClassPath> DeadNPCDressingRefList; // 0x2e0
    static ABP_DeadNPC_Spawner_C* StaticClass();
    void UserConstructionScript0(TArray<void*> NewLocalVar_0, TArray<void*>& K2Node_MakeArray_Array, int32_t CallFunc_Conv_ByteToInt_ReturnValue, FTransform Temp_struct_Variable, FSoftClassPath CallFunc_Array_Get_Item, UChildActorComponent* CallFunc_AddComponent_ReturnValue);
}; // Size: 0x2f0
#pragma pack(pop)
