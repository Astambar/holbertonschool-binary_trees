#include "binary_trees.h"

/**
 * binary_tree_postorder - passe par un arbre binaire
 * en utilisant la traversée post-ordre
 * @tree : arbre à parcourir
 * @func : pointeur vers une fonction à appeler pour chaque nœud
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder((*tree).left, func);
	binary_tree_postorder((*tree).right, func);
	func((*tree).n);
}
