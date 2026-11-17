#include <iostream>
#include "CollisionManager.h"
#include "GameObject.h"

int main() {
    CollisionManager manager;

    // GameObject 생성
    GameObject player(2, "Player", 0, 0, 1, 1, true);
    GameObject enemy1(3, "Enemy1", 1, 1, 1, 1, true);
    GameObject enemy2(4, "Enemy2", 10, 10, 1, 1, true);
    GameObject enemy3(5, "Enemy3", 0.5f, 0.5f, 1, 1, true);

    // 객체 등록
    manager.addGameObject(player);
    manager.addGameObject(enemy1);
    manager.addGameObject(enemy2);
    manager.addGameObject(enemy3);

    // 등록 개수 확인
    std::cout << "Object Count: "
        << manager.getObjectCount() << std::endl;

    // 충돌 검사
    std::cout << "\n[Collision Check 1]\n";
    manager.checkCollisions();

    // Enemy1 제거
    manager.removeGameObject(2);

    std::cout << "\nObject Count After Removal: "
        << manager.getObjectCount() << std::endl;

    // 다시 충돌 검사
    std::cout << "\n[Collision Check 2]\n";
    manager.checkCollisions();

    return 0;
}