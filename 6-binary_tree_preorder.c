#include "binary_trees.h"

/**
 * binary_tree_preorder - passe par un arbre binaire
 * en utilisant la traversée de pré-ordre
 * @tree : arbre à parcourir
 * @func : pointeur vers une fonction à appeler pour chaque nœud
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func((*tree).n);
	binary_tree_preorder((*tree).left, func);
	binary_tree_preorder((*tree).right, func);
}
