#include "binary_trees.h"

/**
 * binary_tree_is_leaf - vérifie si un nœud est une feuille
 * @node : nœud à vérifier
 *
 * Return: 1 si le nœud est une feuille
 * 0 si pas une feuille
 * 0 si le nœud est NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || (*node).left || (*node).right) ? 0 : 1);
}
