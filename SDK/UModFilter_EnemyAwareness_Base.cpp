#include "UModFilter.hpp"
#include "UModFilter_EnemyAwareness_Base.hpp"
UModFilter_EnemyAwareness_Base* UModFilter_EnemyAwareness_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_EnemyAwareness_Base");
    return (UModFilter_EnemyAwareness_Base*)res;
}
