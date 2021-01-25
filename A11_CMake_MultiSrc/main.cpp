#include <iostream>

#include <uftree.hpp>

int main() {
  UnionFindTree uf(5);  // 0~4��5�̗v�f�ɂ���

  uf.unite(0, 2);  // 0��2�͓����O���[�v
  uf.unite(2, 4);  // 2��4�͓����O���[�v
  uf.unite(1, 3);  // 1��3�͓����O���[�v

  // 1��2�͓����O���[�v�H
  std::cout << "same(1, 2) : " << (uf.same(1, 2) ? "True" : "False") << std::endl;
  // 3����������O���[�v�̃����o�[�̐��́H
  std::cout << "size(3) : " << uf.size(3) << std::endl;
  // �O���[�v�̃��X�g��\��
  uf.show();

  return 0;
}

