#include "../include/uftree.hpp"

#include <functional>
#include <iostream>

UnionFindTree::UnionFindTree(int n) : par(n), sizes(n, 1), N(n) {
  for (int i = 0; i < n; i++) par[i] = i;
}

// �v�fx��������O���[�v�̍��m�[�h��ID��������
int UnionFindTree::find(int x) {
  if (par[x] == x)
    return x;
  else
    return par[x] = find(par[x]);
}

// �v�fx, y��������O���[�v���m�𓝍�����
void UnionFindTree::unite(int x, int y) {
  x = find(x);
  y = find(y);
  if (x == y) return;

  if (sizes[x] < sizes[y]) {
    par[x] = y;
    sizes[y] += sizes[x];
  } else {
    par[y] = x;
    sizes[x] += sizes[y];
  }
}

// �O���[�v�̃��X�g��\������
// (ID�����������ɕ\�������, O(n^2)�Ȃ̂ōő��̎����ł͂Ȃ�)
void UnionFindTree::show() {
  std::cout << "Groups : " << std::endl;
  std::function<void(int)> f = [&](int x) {
    std::cout << x << ',';
    for (int y = 0; y < N; y++) {
      if (par[y] == x && y != x) f(y);
    }
  };
  for (int i = 0; i < N; i++) {
    if (par[i] == i) {
      f(i);
      std::cout << std::endl;
    }
  }
}

// �v�fx, y�������O���[�v�ɑ����邩�ǂ���
bool UnionFindTree::same(int x, int y) { return find(x) == find(y); }

// �v�fx����������O���[�v�Ɋ܂܂��v�f�̐�
int UnionFindTree::size(int x) { return sizes[find(x)]; }

