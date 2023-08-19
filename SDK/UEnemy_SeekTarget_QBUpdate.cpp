#include "UEnemy_QBUpdate.hpp"
#include "UEnemy_SeekTarget_QBUpdate.hpp"
UEnemy_SeekTarget_QBUpdate* UEnemy_SeekTarget_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_SeekTarget_QBUpdate");
    return (UEnemy_SeekTarget_QBUpdate*)res;
}
