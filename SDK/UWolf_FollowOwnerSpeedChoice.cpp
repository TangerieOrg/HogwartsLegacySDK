#include "UNPC_MobilitySpeedChoice.hpp"
#include "UWolf_FollowOwnerSpeedChoice.hpp"
UWolf_FollowOwnerSpeedChoice* UWolf_FollowOwnerSpeedChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Wolf_FollowOwnerSpeedChoice");
    return (UWolf_FollowOwnerSpeedChoice*)res;
}
