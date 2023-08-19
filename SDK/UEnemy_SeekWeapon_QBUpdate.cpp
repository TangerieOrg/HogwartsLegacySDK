#include "UEnemy_QBUpdate.hpp"
#include "UEnemy_SeekWeapon_QBUpdate.hpp"
UEnemy_SeekWeapon_QBUpdate* UEnemy_SeekWeapon_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_SeekWeapon_QBUpdate");
    return (UEnemy_SeekWeapon_QBUpdate*)res;
}
