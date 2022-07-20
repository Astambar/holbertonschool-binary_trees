#include "binary_trees.h"

/**
 * binary_tree_is_full - vérifie si un arbre binaire est plein
 * @tree: un pointeur vers le nœud racine de l'arbre à vérifier
 *
 * Return: 1 si l'arbre est plein
 * 0 si l'arborescence n'est pas pleine
 * 0 si l'arbre est NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(*tree).right)
		if(!(*tree).left)
			return (1);

	if ((*tree).right)
		if ((*tree).left)
			return (binary_tree_is_full((*tree).left) &&
				binary_tree_is_full((*tree).right));
	return (0);
}
