#include "FPersistentGameDataListInfo.hpp"
#include "UPersistentGameDataList.hpp"
#include "USaveGame.hpp"
UPersistentGameDataList* UPersistentGameDataList::StaticClass() {
    static auto res = find_uobject("Class /Script/PersistentData.PersistentGameDataList");
    return (UPersistentGameDataList*)res;
}
