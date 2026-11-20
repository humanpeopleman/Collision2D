
#include <iostream>
#include "CollisionManager.h"

int main()
{
    // 1. 서로 떨어진 객체
    {
        std::cout << "\n[Test 1: No Collision]\n";

        GameObject a(1, "A", Rect{ 0, 0, 2, 2 });
        GameObject b(2, "B", Circle{ 100, 100, 1 });

        CollisionManager manager;
        manager.addGameObject(a);
        manager.addGameObject(b);

        std::cout << "Collision Check Count: "
            << manager.checkCollisions() << '\n';
    }

    // 2. 비활성 객체 제외
    {
        std::cout << "\n[Test 2: Inactive Object]\n";

        GameObject a(3, "A", Rect{ 0, 0, 4, 4 });
        GameObject b(4, "B", Circle{ 0, 0, 2 });

        b.setActive(false);

        CollisionManager manager;
        manager.addGameObject(a);
        manager.addGameObject(b);

        std::cout << "Collision Check Count: "
            << manager.checkCollisions() << '\n';
    }

    // 3. 중복 ID 등록 방지
    {
        std::cout << "\n[Test 3: Duplicate ID]\n";

        GameObject a(5, "A", Rect{ 0, 0, 2, 2 });
        GameObject b(5, "B", Circle{ 0, 0, 2 });

        CollisionManager manager;

        std::cout << "First Add: "
            << manager.addGameObject(a) << '\n';

        std::cout << "Second Add: "
            << manager.addGameObject(b) << '\n';

        std::cout << "Object Count: "
            << manager.getObjectCount() << '\n';
    }

    return 0;
}
