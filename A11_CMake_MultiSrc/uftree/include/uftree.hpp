#pragma once

#include <vector>

class UnionFindTree {
private:
  const int N;           // �v�f��
  std::vector<int> par;  // �e�m�[�h�̐e��ID�i���m�[�h�͎������Q�Ɓj
  std::vector<int> sizes;  // �e�m�[�h�����Ƃ���؂̃T�C�Y�i���łȂ��m�[�h�ɂ͖��֌W�j

public:
  UnionFindTree(int n);

  int find(int x);
  void unite(int x, int y);
  bool same(int x, int y);
  void show();
  int size(int x);
};

