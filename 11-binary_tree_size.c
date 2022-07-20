#include "binary_trees.h"

/**
 * binary_tree_size - mesure la taille d'un arbre binaire
 * @tree : arbre pour mesurer la taille de
 *
 * Return: taille de l'arbre
 * 0 si l'arbre est NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size((*tree).left) + binary_tree_size((*tree).right) + 1);
}
