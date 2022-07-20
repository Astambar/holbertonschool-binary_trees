#include "binary_trees.h"

/**
 * binary_tree_inorder - parcourt un arbre binaire
 * en utilisant la traversée dans l'ordre
 * @tree : arbre à parcourir
 * @func : pointeur vers une fonction à appeler pour chaque nœud
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder((*tree).left, func);
	func((*tree).n);
	binary_tree_inorder((*tree).right, func);
}
