#include "UClass.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_SpawnActor.hpp"
UMultiFX2_SpawnActor* UMultiFX2_SpawnActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_SpawnActor");
    return (UMultiFX2_SpawnActor*)res;
}
