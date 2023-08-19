#pragma once
#include <cstdint>
#include "FGuid.hpp"
class UClass;
#pragma pack(push, 1)
struct FMovieScenePossessable {
    TArray<FName> Tags; // 0x0
    FGuid Guid; // 0x10
    FString Name; // 0x20
    UClass* PossessedObjectClass; // 0x30
    FGuid ParentGuid; // 0x38
}; // Size: 0x48
#pragma pack(pop)
