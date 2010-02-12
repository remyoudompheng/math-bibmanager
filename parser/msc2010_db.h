/*
 * math-bibmanager
 * A Bibliography manager for mathematicians
 *
 * Copyright (C) 2010 Rémy Oudompheng

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * MSC 2010 Database
 *
 * Copyright 2006-2010: the Editors of Mathematical Reviews (MR) and
 * Zentralblatt MATH (Zbl).
 *
 * This document is made available under the Creative Commons
 * Attribution-Noncommercial-Share Alike License:
 *   http://creativecommons.org/licenses/by-nc-sa/3.0/
 * Additional terms may apply.
 */

static const char* msc2010_print_major(const int maj)
{
  switch(maj)
    {
    case  0: return "General";
    case  1: return "History and biography";
    case  3: return "Mathematical logic and foundations";
    case  5: return "Combinatorics";
    case  6: return "Order, lattices, ordered algebraic structures";
    case  8: return "General algebraic systems";
    case 11: return "Number theory";
    case 12: return "Field theory and polynomials";
    case 13: return "Commutative algebra";
    case 14: return "Algebraic geometry";
    case 15: return "Linear and multilinear algebra; matrix theory";
    case 16: return "Associative rings and algebras";
    case 17: return "Nonassociative rings and algebras";
    case 18: return "Category theory; homological algebra";
    case 19: return "K-theory";
    case 20: return "Group theory and generalizations";
    case 22: return "Topological groups, Lie groups";
    case 26: return "Real functions";
    case 28: return "Measure and integration";
    case 30: return "Functions of a complex variable";
    case 31: return "Potential theory";
    case 32: return "Several complex variables and analytic spaces";
    case 33: return "Special functions (33 deals with the properties of functions as functions)";
    case 34: return "Ordinary differential equations";
    case 35: return "Partial differential equations";
    case 37: return "Dynamical systems and ergodic theory";
    case 39: return "Difference and functional equations";
    case 40: return "Sequences, series, summability";
    case 41: return "Approximations and expansions";
    case 42: return "Harmonic analysis on Euclidean spaces";
    case 43: return "Abstract harmonic analysis";
    case 44: return "Integral transforms, operational calculus";
    case 45: return "Integral equations";
    case 46: return "Functional analysis";
    case 47: return "Operator theory";
    case 49: return "Calculus of variations and optimal control; optimization";
    case 51: return "Geometry";
    case 52: return "Convex and discrete geometry";
    case 53: return "Differential geometry";
    case 54: return "General topology";
    case 55: return "Algebraic topology";
    case 57: return "Manifolds and cell complexes";
    case 58: return "Global analysis, analysis on manifolds";
    case 60: return "Probability theory and stochastic processes";
    case 62: return "Statistics";
    case 65: return "Numerical analysis";
    case 68: return "Computer science";
    case 70: return "Mechanics of particles and systems";
    case 74: return "Mechanics of deformable solids";
    case 76: return "Fluid mechanics";
    case 78: return "Optics, electromagnetic theory";
    case 80: return "Classical thermodynamics, heat transfer";
    case 81: return "Quantum theory";
    case 82: return "Statistical mechanics, structure of matter";
    case 83: return "Relativity and gravitational theory";
    case 85: return "Astronomy and astrophysics";
    case 86: return "Geophysics";
    case 90: return "Operations research, mathematical programming";
    case 91: return "Game theory, economics, social and behavioral sciences";
    case 92: return "Biology and other natural sciences";
    case 93: return "Systems theory; control";
    case 94: return "Information and communication, circuits";
    case 97: return "Mathematics education";

    default: return "Category not implemented";
    }
}

static const char* msc2010_print_medium(const int maj, const char med)
{
  switch(maj)
    {
    case 0: // General
      switch(med)
	{
	case 'A': return "General and miscellaneous specific topics";
	case 'B': return "Conference proceedings and collections of papers";
	default: return "Subcategory not implemented";
	}
    case 1: // History and biography
      switch(med)
	{
	case 'A': return "History of mathematics and mathematicians";
	default: return "Subcategory not implemented";
	}
    case 3: // Mathematical logic and foundations
      switch(med)
	{
	case 'A': return "Philosophical aspects of logic and foundations";
	case 'B': return "General logic";
	case 'C': return "Model theory";
	case 'D': return "Computability and recursion theory";
	case 'E': return "Set theory";
	case 'F': return "Proof theory and constructive mathematics";
	case 'G': return "Algebraic logic";
	case 'H': return "Nonstandard models";
	default: return "Subcategory not implemented";
	}
    case 5: // Combinatorics
      switch(med)
	{
	case 'A': return "Enumerative combinatorics";
	case 'B': return "Designs and configurations";
	case 'C': return "Graph theory";
	case 'D': return "Extremal combinatorics";
	case 'E': return "Algebraic combinatorics";
	default: return "Subcategory not implemented";
	}
    case 6: // Order, lattices, ordered algebraic structures
      switch(med)
	{
	case 'A': return "Ordered sets";
	case 'B': return "Lattices";
	case 'C': return "Modular lattices, complemented lattices";
	case 'D': return "Distributive lattices";
	case 'E': return "Boolean algebras (Boolean rings)";
	case 'F': return "Ordered structures";
	default: return "Subcategory not implemented";
	}
    case 8: // General algebraic systems
      switch (med)
	{
	case 'A': return "Algebraic structures";
	case 'B': return "Varieties";
	case 'C': return "Other classes of algebras";
	default: return "Subcategory not implemented";
	}
    case 11: // Number theory
      switch (med)
	{
	case 'A': return "Elementary number theory";
	case 'B': return "Sequences and sets";
	case 'C': return "Polynomials and matrices";
	case 'D': return "Diophantine equations";
	case 'E': return "Forms and linear algebraic groups";
	case 'F': return "Discontinuous groups and automorphic forms";
	case 'G': return "Arithmetic algebraic geometry (Diophantine geometry)";
	case 'H': return "Geometry of numbers";
	case 'J': return "Diophantine approximation, transcendental number theory";
	case 'K': return "Probabilistic theory: distribution modulo 1; metric theory of algorithms";
	case 'L': return "Exponential sums and character sums";
	case 'M': return "Zeta and L-functions: analytic theory";
	case 'N': return "Multiplicative number theory";
	case 'P': return "Additive number theory; partitions";
	case 'R': return "Algebraic number theory: global fields";
	case 'S': return "Algebraic number theory: local and p-adic fields";
	case 'T': return "Finite fields and commutative rings (number-theoretic aspects)";
	case 'U': return "Connections with logic";
	case 'Y': return "Computational number theory";
	case 'Z': return "Miscellaneous applications of number theory";
	default: return "Subcategory not implemented";
	}
    case 12: // Field theory and polynomials
      switch(med)
	{
	case 'D': return "Real and complex fields";
	case 'E': return "General field theory";
	case 'F': return "Field extensions";
	case 'G': return "Homological methods (field theory)";
	case 'H': return "Differential and difference algebra";
	case 'J': return "Topological fields";
	case 'K': return "Generalizations of fields";
	case 'L': return "Connections with logic";
	case 'Y': return "Computational aspects of field theory and polynomials";
	default: return "Subcategory not implemented";
	}
    case 13: // Commutative algebra
      switch(med)
	{
	case 'A': return "General commutative ring theory";
	case 'B': return "Ring extensions and related topics";
	case 'C': return "Theory of modules and ideals";
	case 'D': return "Homological methods";
	case 'E': return "Chain conditions, finiteness conditions";
	case 'F': return "Arithmetic rings and other special rings";
	case 'G': return "Integral domains";
	case 'H': return "Local rings and semilocal rings";
	case 'J': return "Topological rings and modules";
	case 'L': return "Applications of logic to commutative algebra";
	case 'M': return "Finite commutative rings";
	case 'N': return "Differential algebra";
	case 'P': return "Computational aspects and applications";
	default: return "Subcategory not implemented";
	}
    case 14: // Algebraic geometry
      switch (med)
	{
	case 'A': return "Foundations";
	case 'B': return "Local theory";
	case 'C': return "Cycles and subschemes";
	case 'D': return "Families, fibrations";
	case 'E': return "Birational geometry";
	case 'F': return "(Co)homology theory";
	case 'G': return "Arithmetic problems. Diophantine geometry";
	case 'H': return "Curves";
	case 'J': return "Surfaces and higher-dimensional varieties";
	case 'K': return "Abelian varieties and schemes";
	case 'L': return "Algebraic groups";
	case 'M': return "Special varieties";
	case 'N': return "Projective and enumerative geometry";
	case 'P': return "Real algebraic and real analytic geometry";
	case 'Q': return "Computational aspects in algebraic geometry";
	case 'R': return "Affine geometry";
	case 'T': return "Tropical geometry";
	default: return "Subcategory not implemented";
	}
    case 15: // Linear and multilinear algebra; matrix theory
      switch (med)
	{
	case 'A': return "Basic linear algebra";
	case 'B': return "Special matrices";
	default: return "Subcategory not implemented";
	}
    case 16: // Associative rings and algebras
      switch (med)
	{
	case 'B': return "General and miscellaneous";
	case 'D': return "Modules, bimodules and ideals";
	case 'E': return "Homological methods";
	case 'G': return "Representation theory of rings and algebras";
	case 'H': return "Algebras and orders";
	case 'K': return "Division rings and semisimple Artin rings";
	case 'L': return "Local rings and generalizations";
	case 'N': return "Radicals and radical properties of rings";
	case 'P': return "Chain conditions, growth conditions, and other forms of finiteness";
	case 'R': return "Rings with polynomial identity";
	case 'S': return "Rings and algebras arising under various constructions";
	case 'T': return "Hopf algebras, quantum groups and related topics";
	case 'U': return "Conditions on elements";
	case 'W': return "Rings and algebras with additional structure";
	case 'Y': return "Generalizations";
	case 'Z': return "Computational aspects of associative rings";
	default: return "Subcategory not implemented";
	}
    case 17: // Nonassociative rings and algebras
      switch (med)
	{
	case 'A': return "General nonassociative rings";
	case 'B': return "Lie algebras and Lie superalgebras";
	case 'C': return "Jordan algebras (algebras, triples and pairs)";
	case 'D': return "Other nonassociative rings and algebras";
	default: return "Subcategory not implemented";
	}
    case 18: // Category theory, homological algebra
      switch (med)
	{
	case 'A': return "General theory of categories and functors";
	case 'B': return "Special categories";
	case 'C': return "Categories and theories";
	case 'D': return "Categories with structure";
	case 'E': return "Abelian categories";
	case 'F': return "Categories and geometry";
	case 'G': return "Homological algebra";
	default: return "Subcategory not implemented";
	}
    case 19: // K-theory
      switch (med)
	{
	case 'A': return "Grothendieck groups and K0";
	case 'B': return "Whitehead groups and K1";
	case 'C': return "Steinberg groups and K2";
	case 'D': return "Higher algebraic K-theory";
	case 'E': return "K-theory in geometry";
	case 'F': return "K-theory in number theory";
	case 'G': return "K-theory of forms";
	case 'J': return "Obstructions from topology";
	case 'K': return "K-theory and operator algebras";
	case 'L': return "Topological K-theory";
	case 'M': return "Miscellaneous applications of K-theory";
	default: return "Subcategory not implemented";
	}
    case 20: // Group theory and generalizations
      switch (med)
	{
	case 'A': return "Foundations";
	case 'B': return "Permutation groups";
	case 'C': return "Representation theory of groups";
	case 'D': return "Abstract finite groups";
	case 'E': return "Structure and classification of infinite or finite groups";
	case 'F': return "Special aspects of infinite or finite groups";
	case 'G': return "Linear algebraic groups and related topics";
	case 'H': return "Other groups of matrices";
	case 'J': return "Connections with homological algebra and category theory";
	case 'K': return "Abelian groups";
	case 'L': return "Groupoids (i.e. small categories in which all morphisms are isomorphisms)";
	case 'M': return "Semigroups";
	case 'N': return "Other generalizations of groups";
	case 'P': return "Probabilistic methods in group theory";
	default: return "Subcategory not implemented";
	}
    case 22: // Topological groups, Lie groups
      switch (med)
	{
	case 'A': return "Topological and differentiable algebraic systems";
	case 'B': return "Locally compact abelian groups (LCA groups)";
	case 'C': return "Compact groups";
	case 'D': return "Locally compact groups and their algebras";
	case 'E': return "Lie groups";
	case 'F': return "Noncompact transformation groups";
	default: return "Subcategory not implemented";
	}
    case 26: // Real functions
      switch (med)
	{
	case 'A': return "Functions of one variable";
	case 'B': return "Functions of several variables";
	case 'C': return "Polynomials, rational functions";
	case 'D': return "Inequalities";
	case 'E': return "Miscellaneous topics";
	default: return "Subcategory not implemented";
	}
    case 28: // Measure and integration
      switch (med)
	{
	case 'A': return "Classical measure theory";
	case 'B': return "Set functions, measures and integrals with values in abstract spaces";
	case 'C': return "Set functions and measures on spaces with additional structure";
	case 'D': return "Measure-theoretic ergodic theory";
	case 'E': return "Miscellaneous topics in measure theory";
	default: return "Subcategory not implemented";
	}
    case 30: // Functions of a complex variable
      switch (med)
	{
	case 'A': return "General properties";
	case 'B': return "Series expansions";
	case 'C': return "Geometric function theory";
	case 'D': return "Entire and meromorphic functions, and related topics";
	case 'E': return "Miscellaneous topics of analysis in the complex domain";
	case 'F': return "Riemann surfaces";
	case 'G': return "Generalized function theory";
	case 'H': return "Spaces and algebras of analytic functions";
	case 'J': return "Function theory on the disc";
	case 'K': return "Universal holomorphic functions";
	case 'L': return "Analysis on metric spaces";
	default: return "Subcategory not implemented";
	}
    case 31: // Potential theory
      switch (med)
	{
	case 'A': return "Two-dimensional theory";
	case 'B': return "Higher-dimensional theory";
	case 'C': return "Other generalizations";
	case 'D': return "Axiomatic potential theory";
	case 'E': return "Potential theory on metric spaces";
	default: return "Subcategory not implemented";
	}
    case 32: // Several complex variables
      switch (med)
	{
	case 'A': return "Holomorphic functions of several complex variables";
	case 'B': return "Local analytic geometry";
	case 'C': return "Analytic spaces";
	case 'D': return "Analytic continuation";
	case 'E': return "Holomorphic convexity";
	case 'F': return "Geometric convexity";
	case 'G': return "Deformations of analytic structures";
	case 'H': return "Holomorphic mappings and correspondences";
	case 'J': return "Compact analytic spaces";
	case 'K': return "Generalizations of analytic spaces";
	case 'L': return "Holomorphic fiber spaces";
	case 'M': return "Complex spaces with a group of automorphisms";
	case 'N': return "Automorphic functions";
	case 'P': return "Non-Archimedean analysis";
	case 'Q': return "Complex manifolds";
	case 'S': return "Singularities";
	case 'T': return "Pseudoconvex domains";
	case 'U': return "Pluripotential theory";
	case 'V': return "CR manifolds";
	case 'W': return "Differential operators in several variables";
	default: return "Subcategory not implemented";
	}
    case 33: // Special functions
      switch (med)
	{
	case 'B': return "Elementary classical functions";
	case 'C': return "Hypergeometric functions";
	case 'D': return "Basic hypergeometric functions";
	case 'E': return "Other special functions";
	case 'F': return "Computational aspects";
	default: return "Subcategory not implemented";
	}
    case 34: // Ordinary differential equations
      switch (med)
	{
	case 'A': return "General theory";
	case 'B': return "Boundary value problems";
	case 'C': return "Qualitative theory";
	case 'D': return "Stability theory";
	case 'E': return "Asymptotic theory";
	case 'F': return "Equations and systems with randomness";
	case 'G': return "Differential equations in abstract spaces";
	case 'H': return "Control problems";
	case 'K': return "Functional-differential and differential-difference equations";
	case 'L': return "Ordinary differential operators";
	case 'M': return "Differential equations in the complex domain";
	case 'N': return "Dynamic equations on time scales or measure chains";
	default: return "Subcategory not implemented";
	}
    case 35: // Partial differential equations
      switch (med)
	{
	case 'A': return "General topics";
	case 'B': return "Qualitative properties of solutions";
	case 'C': return "Representations of solutions";
	case 'D': return "Generalized solutions";
	case 'E': return "Equations and systems with constant coefficients";
	case 'F': return "General first-order equations and systems";
	case 'G': return "General higher-order equations and systems";
	case 'H': return "Close-to-elliptic equations and systems";
	case 'J': return "Elliptic equations and systems";
	case 'K': return "Parabolic equations and systems";
	case 'L': return "Hyperbolic equations and systems";
	case 'M': return "Equations and systems of special type (mixed, composite, etc.)";
	case 'N': return "Overdetermined systems";
	case 'P': return "Spectral theory and eigenvalue problems";
	case 'Q': return "Equations of mathematical physics and other areas of application";
	case 'R': return "Miscellaneous topics";
	case 'S': return "Pseudodifferential operators and other generalizations of partial differential operators";
	default: return "Subcategory not implemented";
	}
    case 37: // Dynamical systems and ergodic theory
      switch (med)
	{
	case 'A': return "Ergodic theory";
	case 'B': return "Topological dynamics";
	case 'C': return "Smooth dynamical systems: general theory";
	case 'D': return "Dynamical systems with hyperbolic behavior";
	case 'E': return "Low-dimensional dynamical systems";
	case 'F': return "Complex dynamical systems";
	case 'G': return "Local and nonlocal bifurcation theory";
	case 'H': return "Random dynamical systems";
	case 'J': return "Finite-dimensional Hamiltonian, Lagrangian, contact, and nonholonomic systems";
	case 'K': return "Infinite-dimensional Hamiltonian systems";
	case 'L': return "Infinite-dimensional dissipative dynamical systems";
	case 'M': return "Approximation methods and numerical treatment of dynamical systems";
	case 'N': return "Applications";
	case 'P': return "Arithmetic and non-Archimedean dynamical systems";
	default: return "Subcategory not implemented";
	}
    case 39: // Difference and functional equations
      switch (med)
	{
	case 'A': return "Difference equations";
	case 'B': return "Functional equations and inequalities";
	default: return "Subcategory not implemented";
	}
    case 40: // Sequences, series, summability
      switch (med)
	{
	case 'A': return "Convergence and divergence of infinite limiting processes";
	case 'B': return "Multiple sequences and series";
	case 'C': return "General summability methods";
	case 'D': return "Direct theorems on summability";
	case 'E': return "Inversion theorems";
	case 'F': return "Absolute and strong summability";
	case 'G': return "Special methods of summability";
	case 'H': return "Functional analytic methods in summability";
	case 'J': return "Summability in abstract structures";
	default: return "Subcategory not implemented";
	}
    case 41: // Approximations and expansions
      switch (med)
	{
	case 'A': return "Approximations and expansions";
	default: return "Subcategory not implemented";
	}
    case 42: // Harmonic analysis on Euclidean spaces
      switch (med)
	{
	case 'A': return "Harmonic analysis in one variable";
	case 'B': return "Harmonic analysis in several variables";
	case 'C': return "Nontrigonometric harmonic analysis";
	default: return "Subcategory not implemented";
	}
    case 43: // Abstract harmonic analysis
      switch (med)
	{
	case 'A': return "Abstract harmonic analysis";
	default: return "Subcategory not implemented";
	}
    case 44: // Integral transforms, operational calculus
      switch (med)
	{
	case 'A': return "Integral transforms, operational calculus";
	default: return "Subcategory not implemented";
	}
    case 45: // Integral equations
      switch (med)
	{
	case 'A': return "Linear integral equations";
	case 'B': return "Fredholm integral equations";
	case 'C': return "Eigenvalue problems";
	case 'D': return "Volterra integral equations";
	case 'E': return "Singular integral equations";
	case 'F': return "Systems of linear integral equations";
	case 'G': return "Nonlinear integral equations";
	case 'H': return "Miscellaneous special kernels";
	case 'J': return "Integro-ordinary differential equations";
	case 'K': return "Integro-partial differential equations";
	case 'L': return "Theoretical approximation of solutions";
	case 'M': return "Qualitative behavior";
	case 'N': return "Abstract integral equations, integral equations in abstract spaces";
	case 'P': return "Integral operators";
	case 'Q': return "Inverse problems";
	case 'R': return "Random integral equations";
	default: return "Subcategory not implemented";
	}
    case 46: // Functional analysis
      switch (med)
	{
	case 'A': return "Topological linear spaces and related structures";
	case 'B': return "Normed linear spaces and Banach spaces; Banach lattices";
	case 'C': return "Inner product spaces and their generalizations, Hilbert spaces";
	case 'E': return "Linear function spaces and their duals";
	case 'F': return "Distributions, generalized functions, distribution spaces";
	case 'G': return "Measures, integration, derivative, holomorphy (all involving infinite-dimensional spaces)";
	case 'H': return "Topological algebras, normed rings and algebras, Banach algebras";
	case 'J': return "Commutative Banach algebras and commutative topological algebras";
	case 'K': return "Topological (rings and) algebras with an involution";
	case 'L': return "Selfadjoint operator algebras (C*-algebras, von Neumann (W*-) algebras, etc.)";
	case 'M': return "Methods of category theory in functional analysis";
	case 'N': return "Miscellaneous applications of functional analysis";
	case 'S': return "Other (nonclassical) types of functional analysis";
	case 'T': return "Nonlinear functional analysis";
	default: return "Subcategory not implemented";
	}
    case 47: // Operator theory
      switch (med)
	{
	case 'A': return "General theory of linear operators";
	case 'B': return "Special classes of linear operators";
	case 'C': return "Individual linear operators as elements of algebraic systems";
	case 'D': return "Groups and semigroups of linear operators, their generalizations and applications";
	case 'E': return "Ordinary differential operators";
	case 'F': return "Partial differential operators";
	case 'G': return "Integral, integro-differential, and pseudodifferential operators";
	case 'H': return "Nonlinear operators and their properties";
	case 'J': return "Equations and inequalities involving nonlinear operators";
	case 'L': return "Linear spaces and algebras of operators";
	case 'N': return "Miscellaneous applications of operator theory";
	case 'S': return "Other (nonclassical) types of operator theory";
	default: return "Subcategory not implemented";
	}
    case 49: // Calculus of variations and optimal control; optimization
      switch (med)
	{
	case 'J': return "Existence theories";
	case 'K': return "Optimality conditions";
	case 'L': return "Hamilton-Jacobi theories, including dynamic programming";
	case 'M': return "Numerical methods";
	case 'N': return "Miscellaneous topics";
	case 'Q': return "Manifolds";
	case 'R': return "Variational methods for eigenvalues of operators";
	case 'S': return "Variational principles of physics";
	default: return "Subcategory not implemented";
	}
    case 51: // Geometry
      switch (med)
	{
	case 'A': return "Linear incidence geometry";
	case 'B': return "Nonlinear incidence geometry";
	case 'C': return "Ring geometry (Hjelmslev, Barbilian, etc.)";
	case 'D': return "Geometric closure systems";
	case 'E': return "Finite geometry and special incidence structures";
	case 'F': return "Metric geometry";
	case 'G': return "Ordered geometries (ordered incidence structures, etc.)";
	case 'H': return "Topological geometry";
	case 'J': return "Incidence groups";
	case 'K': return "Distance geometry";
	case 'L': return "Geometric order structures";
	case 'M': return "Real and complex geometry";
	case 'N': return "Analytic and descriptive geometry";
	case 'P': return "Geometry and physics";
	default: return "Subcategory not implemented";
	}
    case 52: // Convex and discrete geometry
      switch (med)
	{
	case 'A': return "General convexity";
	case 'B': return "Polytopes and polyhedra";
	case 'C': return "Discrete geometry";
	default: return "Subcategory not implemented";
	}
    case 53: // Differential geometry
      switch (med)
	{
	case 'A': return "Classical differential geometry";
	case 'B': return "Local differential geometry";
	case 'C': return "Global differential geometry";
	case 'D': return "Symplectic geometry, contact geometry";
	case 'Z': return "Applications to physics";
	default: return "Subcategory not implemented";
	}
    case 54: // General topology
      switch (med)
	{
	case 'A': return "Generalities";
	case 'B': return "Basic constructions";
	case 'C': return "Maps and general types of spaces defined by maps";
	case 'D': return "Fairly general properties";
	case 'E': return "Spaces with richer structures";
	case 'F': return "Special properties";
	case 'G': return "Peculiar spaces";
	case 'H': return "Connections with other structures, applications";
	case 'J': return "Nonstandard topology";
	default: return "Subcategory not implemented";
	}
    case 55: // Algebraic topology
      switch (med)
	{
	case 'M': return "Classical topics";
	case 'N': return "Homology and cohomology theories";
	case 'P': return "Homotopy theory";
	case 'Q': return "Homotopy groups";
	case 'R': return "Fiber spaces and bundles";
	case 'S': return "Operations and obstructions";
	case 'T': return "Spectral sequences";
	case 'U': return "Applied homological algebra and category theory";
	default: return "Subcategory not implemented";
	}
    case 57: // Manifolds and cell complexes
      switch (med)
	{
	case 'M': return "Low-dimensional topology";
	case 'N': return "Topological manifolds";
	case 'P': return "Generalized manifolds";
	case 'Q': return "PL-topology";
	case 'R': return "Differential topology";
	case 'S': return "Topological transformation groups";
	case 'T': return "Homology and homotopy of topological groups and related structures";
	default: return "Subcategory not implemented";
	}
    case 58: // Global analysis, analysis on manifolds
      switch (med)
	{
	case 'A': return "General theory of differentiable manifolds";
	case 'B': return "Infinite-dimensional manifolds";
	case 'C': return "Calculus on manifolds; nonlinear operators";
	case 'D': return "Spaces and manifolds of mappings (including nonlinear versions of 46Exx)";
	case 'E': return "Variational problems in infinite-dimensional spaces";
	case 'H': return "Pseudogroups, differentiable groupoids and general structures on manifolds";
	case 'J': return "Partial differential equations on manifolds; differential operators";
	case 'K': return "Theory of singularities and catastrophe theory";
	case 'Z': return "Applications to physics";
	default: return "Subcategory not implemented";
	}
    case 60: // Probability theory and stochastic processes
      switch (med)
	{
	case 'A': return "Foundations of probability theory";
	case 'B': return "Probability theory on algebraic and topological structures";
	case 'C': return "Combinatorial probability";
	case 'D': return "Geometric probability and stochastic geometry";
	case 'E': return "Distribution theory";
	case 'F': return "Limit theorems";
	case 'G': return "Stochastic processes";
	case 'H': return "Stochastic analysis";
	case 'J': return "Markov processes";
	case 'K': return "Special processes";
	default: return "Subcategory not implemented";
	}
    case 62: // Statistics
      switch (med)
	{
	case 'A': return "Foundational and philosophical topics";
	case 'B': return "Sufficiency and information";
	case 'C': return "Decision theory";
	case 'D': return "Sampling theory, sample surveys";
	case 'E': return "Distribution theory";
	case 'F': return "Parametric inference";
	case 'G': return "Nonparametric inference";
	case 'H': return "Multivariate analysis";
	case 'J': return "Linear inference, regression";
	case 'K': return "Design of experiments";
	case 'L': return "Sequential methods";
	case 'M': return "Inference from stochastic processes";
	case 'N': return "Survival analysis and censored data";
	case 'P': return "Applications";
	case 'Q': return "Statistical tables";
	default: return "Subcategory not implemented";
	}
    case 65: // Numerical analysis
      switch (med)
	{
	case 'A': return "Tables";
	case 'B': return "Acceleration of convergence";
	case 'C': return "Probabilistic methods, simulation and stochastic differential equations";
	case 'D': return "Numerical approximation and computational geometry (primarily algorithms)";
	case 'E': return "Numerical methods in complex analysis (potential theory, etc.)";
	case 'F': return "Numerical linear algebra";
	case 'G': return "Error analysis and interval analysis";
	case 'H': return "Nonlinear algebraic or transcendental equations";
	case 'J': return "Numerical analysis in abstract spaces";
	case 'K': return "Mathematical programming, optimization and variational techniques";
	case 'L': return "Ordinary differential equations";
	case 'M': return "Partial differential equations, initial value and time-dependent initial-boundary value problems";
	case 'N': return "Partial differential equations, boundary value problems";
	case 'P': return "Numerical problems in dynamical systems";
	case 'Q': return "Difference and functional equations, recurrence relations";
	case 'R': return "Integral equations, integral transforms";
	case 'S': return "Graphical methods";
	case 'T': return "Numerical methods in Fourier analysis";
	case 'Y': return "Computer aspects of numerical algorithms";
	case 'Z': return "Applications to physics";
	default: return "Subcategory not implemented";
	}
    case 68: // Computer science
      switch (med)
	{
	case 'M': return "Computer system organization";
	case 'N': return "Software";
	case 'P': return "Theory of data";
	case 'Q': return "Theory of computing";
	case 'R': return "Discrete mathematics in relation to computer science";
	case 'T': return "Artificial intelligence";
	case 'U': return "Computing methodologies and applications";
	case 'W': return "Algorithms";
	default: return "Subcategory not implemented";
	}
    case 70: // Mechanics of particles and systems
      switch (med)
	{
	case 'A': return "Axiomatics, foundations";
	case 'B': return "Kinematics";
	case 'C': return "Statics";
	case 'E': return "Dynamics of a rigid body and of multibody systems";
	case 'F': return "Dynamics of a system of particles, including celestial mechanics";
	case 'G': return "General models, approaches, and methods";
	case 'H': return "Hamiltonian and Lagrangian mechanics";
	case 'J': return "Linear vibration theory";
	case 'K': return "Nonlinear dynamics";
	case 'L': return "Random vibrations";
	case 'M': return "Orbital mechanics";
	case 'P': return "Variable mass, rockets";
	case 'Q': return "Control of mechanical systems";
	case 'S': return "Classical field theories";
	default: return "Subcategory not implemented";
	}
    case 74: // Mechanics of deformable solids
      switch (med)
	{
	case 'A': return "Generalities, axiomatics, foundations of continuum mechanics of solids";
	case 'B': return "Elastic materials";
	case 'C': return "Plastic materials, materials of stress-rate and internal-variable type";
	case 'D': return "Materials of strain-rate type and history type, other materials with memory (including elastic materials with viscous damping, various viscoelastic materials)";
	case 'E': return "Material properties given special treatment";
	case 'F': return "Coupling of solid mechanics with other effects";
	case 'G': return "Equilibrium (steady-state) problems";
	case 'H': return "Dynamical problems";
	case 'J': return "Waves";
	case 'K': return "Thin bodies, structures";
	case 'L': return "Special subfields of solid mechanics";
	case 'M': return "Special kinds of problems";
	case 'N': return "Phase transformations in solids";
	case 'P': return "Optimization";
	case 'Q': return "Homogenization, determination of effective properties";
	case 'R': return "Fracture and damage";
	case 'S': return "Numerical methods";
	default: return "Subcategory not implemented";
	}
    case 76: // Fluid mechanics
      switch (med)
	{
	case 'A': return "Foundations, constitutive equations, rheology";
	case 'B': return "Incompressible inviscid fluids";
	case 'D': return "Incompressible viscous fluids";
	case 'E': return "Hydrodynamic stability";
	case 'F': return "Turbulence";
	case 'G': return "General aerodynamics and subsonic flows";
	case 'H': return "Transonic flows";
	case 'J': return "Supersonic flows";
	case 'K': return "Hypersonic flows";
	case 'L': return "Shock waves and blast waves";
	case 'M': return "Basic methods in fluid mechanics";
	case 'N': return "Compressible fluids and gas dynamics, general";
	case 'P': return "Rarefied gas flows, Boltzmann equation";
	case 'Q': return "Hydro- and aero-acoustics";
	case 'R': return "Diffusion and convection";
	case 'S': return "Flows in porous media; filtration; seepage";
	case 'T': return "Two-phase and multiphase flows";
	case 'U': return "Rotating fluids";
	case 'V': return "Reaction effects in flows";
	case 'W': return "Magnetohydrodynamics and electrohydrodynamics";
	case 'X': return "Ionized gas flow in electromagnetic fields; plasmic flow";
	case 'Y': return "Quantum hydrodynamics and relativistic hydrodynamics";
	case 'Z': return "Biological fluid mechanics";
	default: return "Subcategory not implemented";
	}
    case 78: // Optics, electromagnetic theory
      switch (med)
	{
	case 'A': return "General";
	case 'M': return "Basic methods";
	default: return "Subcategory not implemented";
	}
    case 80: // Classical thermodynamics, heat transfer
      switch (med)
	{
	case 'A': return "Thermodynamics and heat transfer";
	case 'M': return "Basic methods";
	default: return "Subcategory not implemented";
	}
    case 81: // Quantum theory
      switch (med)
	{
	case 'P': return "Axiomatics, foundations, philosophy";
	case 'Q': return "General mathematical topics and methods in quantum theory";
	case 'R': return "Groups and algebras in quantum theory";
	case 'S': return "General quantum mechanics and problems of quantization";
	case 'T': return "Quantum field theory; related classical field theories";
	case 'U': return "Scattering theory";
	case 'V': return "Applications to specific physical systems";
	default: return "Subcategory not implemented";
	}
    case 82: // Statistical mechanics, structure of matter
      switch (med)
	{
	case 'B': return "Equilibrium statistical mechanics";
	case 'C': return "Time-dependent statistical mechanics (dynamic and nonequilibrium)";
	case 'D': return "Applications to specific types of physical systems";
	default: return "Subcategory not implemented";
	}
    case 83: // Relativity and gravitational theory
      switch (med)
	{
	case 'A': return "Special relativity";
	case 'B': return "Observational and experimental questions";
	case 'C': return "General relativity";
	case 'D': return "Relativistic gravitational theories other than Einstein's, including asymmetric field theories";
	case 'E': return "Unified, higher-dimensional and super field theories";
	case 'F': return "Cosmology";
	default: return "Subcategory not implemented";
	}
    case 85: // Astronomy and astrophysics
      switch (med)
	{
	case 'A': return "Astronomy and astrophysics";
	default: return "Subcategory not implemented";
	}
    case 86: // Geophysics
      switch (med)
	{
	case 'A': return "Geophysics";
	default: return "Subcategory not implemented";
	}
    case 90: // Operations research, mathematical programming
      switch (med)
	{
	case 'A': return "Game theory";
	case 'B': return "Mathematical economics";
	case 'C': return "Social and behavioral sciences: general topics";
	case 'D': return "Mathematical sociology (including anthropology)";
	case 'E': return "Mathematical psychology";
	case 'F': return "Other social and behavioral sciences (mathematical treatment)";
	case 'G': return "Mathematical finance";
	default: return "Subcategory not implemented";
	}
    case 91: // Game theory, economics, social and behavioral sciences
      switch (med)
	{
	default: return "Subcategory not implemented";
	}
    case 92: // Biology and other natural sciences
      switch (med)
	{
	case 'B': return "Mathematical biology in general";
	case 'C': return "Physiological, cellular and medical topics";
	case 'D': return "Genetics and population dynamics";
	case 'E': return "Chemistry";
	case 'F': return "Other natural sciences";
	default: return "Subcategory not implemented";
	}
    case 93: // Systems theory; control
      switch (med)
	{
	case 'A': return "General";
	case 'B': return "Controllability, observability, and system structure";
	case 'C': return "Control systems";
	case 'D': return "Stability";
	case 'E': return "Stochastic systems and control";
	default: return "Subcategory not implemented";
	}
    case 94: // Information and communication, circuits
      switch (med)
	{
	case 'A': return "Communication, information";
	case 'B': return "Theory of error-correcting codes and error-detecting codes";
	case 'C': return "Circuits, networks";
	case 'D': return "Fuzzy sets and logic (in connection with questions of Section 94)";
	default: return "Subcategory not implemented";
	}
    case 97: // Mathematics education
      switch (med)
	{
	case 'A': return "General, mathematics and education";
	case 'B': return "Educational policy and systems";
	case 'C': return "Psychology of mathematics education, research in mathematics education";
	case 'D': return "Education and instruction in mathematics";
	case 'E': return "Foundations of mathematics";
	case 'F': return "Arithmetic, number theory";
	case 'G': return "Geometry";
	case 'H': return "Algebra";
	case 'I': return "Analysis";
	case 'K': return "Combinatorics, graph theory, probability theory, statistics";
	case 'M': return "Mathematical modeling, applications of mathematics";
	case 'N': return "Numerical mathematics";
	case 'P': return "Computer science";
	case 'Q': return "Computer science education";
	case 'R': return "Computer science applications";
	case 'U': return "Educational material and media, educational technology";
	default: return "Subcategory not implemented";
	}
    default: return "Subcategory not implemented";
    }
}

static const char* msc2010_print_minor(const int maj, const char med, const int min)
{
  switch(maj)
    {
    case 14: // Algebraic geometry
      switch (med)
	{
	case 'A': // Foundations
	  switch(min)
	    {
	    case  5: return "Relevant commutative algebra";
	    case 10: return "Varieties and morphisms";
	    case 15: return "Schemes and morphisms";
	    case 20: return "Generalizations (algebraic spaces, stacks)";
	    case 22: return "Noncommutative algebraic geometry";
	    case 25: return "Elementary questions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Local theory
	  switch(min)
	    {
	    case  5: return "Singularities";
	    case  7: return "Deformations of singularities";
	    case 10: return "Infinitesimal methods";
	    case 12: return "Local deformation theory, Artin approximation, etc.";
	    case 15: return "Local cohomology";
	    case 20: return "Formal neighborhoods";
	    case 25: return "Local structure of morphisms: étale, flat, etc.";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Cycles and subschemes
	  switch(min)
	    {
	    case  5: return "Parametrization (Chow and Hilbert schemes)";
	    case 15: return "(Equivariant) Chow groups and rings; motives";
	    case 17: return "Intersection theory, characteristic classes, intersection multiplicities";
	    case 20: return "Divisors, linear systems, invertible sheaves";
	    case 21: return "Pencils, nets, webs";
	    case 22: return "Picard groups";
	    case 25: return "Algebraic cycles";
	    case 30: return "Transcendental methods, Hodge theory";
	    case 34: return "Torelli problem";
	    case 35: return "Applications of methods of algebraic K-theory";
	    case 40: return "Riemann-Roch theorems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Families and fibrations
	  switch(min)
	    {
	    case  5: return "Structure of families (Picard-Lefschetz, monodromy, etc.)";
	    case  6: return "Fibrations, degenerations";
	    case  7: return "Variation of Hodge structures";
	    case 10: return "Arithmetic ground fields (finite, local, global)";
	    case 15: return "Formal methods; deformations";
	    case 20: return "Algebraic moduli problems, moduli of vector bundles";
	    case 21: return "Applications of vector bundles and moduli spaces in mathematical physics (twistor theory, instantons, quantum field theory)";
	    case 22: return "Fine and coarse moduli spaces";
	    case 23: return "Stacks and moduli problems";
	    case 24: return "Geometric Langlands program: algebro-geometric aspects";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Birational geometry
	  switch(min)
	    {
	    case  5: return "Rational and birational maps";
	    case  7: return "Birational automorphisms, Cremona group and generalizations";
	    case  8: return "Rationality questions";
	    case 15: return "Global theory and resolution of singularities";
	    case 16: return "McKay correspondence";
	    case 18: return "Arcs and motivic integration";
	    case 20: return "Coverings";
	    case 22: return "Ramification problems";
	    case 25: return "Embeddings";
	    case 30: return "Minimal model program (Mori theory, extremal rays)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // (Co)homology theory
	  switch(min)
	    {
	    case  5: return "Sheaves, derived categories of sheaves and related constructions";
	    case 10: return "Differentials and other special sheaves; D-modules; Bernstein-Sato ideals and polynomials";
	    case 17: return "Vanishing theorems";
	    case 18: return "Multiplier ideals";
	    case 20: return "Étale and other Grothendieck topologies and (co)homologies";
	    case 22: return "Brauer groups of schemes";
	    case 25: return "Classical real and complex (co)homology";
	    case 30: return "p-adic cohomology, crystalline cohomology";
	    case 35: return "Homotopy theory; fundamental groups";
	    case 40: return "de Rham cohomology";
	    case 42: return "Motivic cohomology; motivic homotopy theory";
	    case 43: return "Other algebro-geometric (co)homologies (e.g., intersection, equivariant, Lawson, Deligne (co)homologies)";
	    case 45: return "Topological properties";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Arithmetic problems. Diophantine geometry
	  switch(min)
	    {
	    case  5: return "Rational points";
	    case 10: return "Zeta-functions and related questions (Birch-Swinnerton-Dyer conjecture)";
	    case 15: return "Finite ground fields";
	    case 17: return "Positive characteristic ground fields";
	    case 20: return "Local ground fields";
	    case 22: return "Rigid analytic geometry";
	    case 25: return "Global ground fields";
	    case 27: return "Other nonalgebraically closed ground fields";
	    case 32: return "Universal profinite groups (relationship to moduli spaces, projective and moduli towers, Galois theory)";
	    case 35: return "Modular and Shimura varieties";
	    case 40: return "Arithmetic varieties and schemes; Arakelov theory; heights";
	    case 50: return "Applications to coding theory and cryptography";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Curves
	  switch(min)
	    {
	    case  5: return "Algebraic functions; function fields";
	    case 10: return "Families, moduli (algebraic)";
	    case 15: return "Families, moduli (analytic)";
	    case 20: return "Singularities, local rings";
	    case 25: return "Arithmetic ground fields";
	    case 30: return "Coverings, fundamental group";
	    case 37: return "Automorphisms";
	    case 40: return "Jacobians, Prym varieties";
	    case 42: return "Theta functions; Schottky problem";
	    case 45: return "Special curves and curves of low genus";
	    case 50: return "Plane and space curves";
	    case 51: return "Special divisors (gonality, Brill-Noether theory)";
	    case 52: return "Elliptic curves";
	    case 55: return "Riemann surfaces; Weierstrass points; gap sequences";
	    case 57: return "Dessins d'enfants theory";
	    case 60: return "Vector bundles on curves and their moduli";
	    case 70: return "Relationships with integrable systems";
	    case 81: return "Relationships with physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Surfaces and higher-dimensional varieties
	  switch(min)
	    {
	    case 10: return "Families, moduli, classification: algebraic theory";
	    case 15: return "Moduli, classification: analytic theory; relations with modular forms";
	    case 17: return "Singularities";
	    case 20: return "Arithmetic ground fields";
	    case 25: return "Special surfaces";
	    case 26: return "Rational and ruled surfaces";
	    case 27: return "Elliptic surfaces";
	    case 28: return "K3 surfaces and Enriques surfaces";
	    case 29: return "Surfaces of general type";
	    case 30: return "3-folds";
	    case 32: return "Calabi-Yau manifolds";
	    case 33: return "Mirror symmetry";
	    case 35: return "4-folds";
	    case 40: return "n-folds (n>4)";
	    case 45: return "Fano varieties";
	    case 50: return "Automorphisms of surfaces and higher-dimensional varieties";
	    case 60: return "Vector bundles on surfaces and higher-dimensional varieties, and their moduli";
	    case 70: return "Hypersurfaces";
	    case 80: return "Topology of surfaces (Donaldson polynomials, Seiberg-Witten invariants)";
	    case 81: return "Relationships with physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Abelian varieties and schemes
	  switch(min)
	    {
	    case  2: return "Isogeny";
	    case  5: return "Algebraic theory";
	    case 10: return "Algebraic moduli, classification";
	    case 12: return "Subvarieties";
	    case 15: return "Arithmetic ground fields";
	    case 20: return "Analytic theory; abelian integrals and differentials";
	    case 22: return "Complex multiplication";
	    case 25: return "Theta functions";
	    case 30: return "Picard schemes, higher Jacobians";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Algebraic groups
	  switch(min)
	    {
	    case 05: return "Formal groups, p-divisible groups";
	    case 10: return "Group varieties";
	    case 15: return "Group schemes";
	    case 17: return "Affine algebraic groups, hyperalgebra constructions";
	    case 24: return "Geometric invariant theory";
	    case 30: return "Group actions on varieties or schemes (quotients)";
	    case 35: return "Classical groups (geometric aspects)";
	    case 40: return "Other algebraic groups (geometric aspects)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Special varieties
	  switch(min)
	    {
	    case 05: return "Varieties defined by ring conditions (factorial, Cohen-Macaulay, seminormal)";
	    case 06: return "Linkage";
	    case  7: return "Low codimension problems";
	    case 10: return "Complete intersections";
	    case 12: return "Determinantal varieties";
	    case 15: return "Grassmannians, Schubert varieties, flag manifolds";
	    case 17: return "Homogeneous spaces and generalizations";
	    case 20: return "Rational and unirational varieties";
	    case 22: return "Rationally connected varieties";
	    case 25: return "Toric varieties, Newton polyhedra";
	    case 27: return "Compactifications; symmetric and spherical varieties";
	    case 30: return "Supervarieties";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Projective and enumerative geometry
	  switch(min)
	    {
	    case  5: return "Projective techniques";
	    case 10: return "Enumerative problems (combinatorial problems)";
	    case 15: return "Classical problems, Schubert calculus";
	    case 20: return "Configurations and arrangements of linear subspaces";
	    case 25: return "Varieties of low degree";
	    case 30: return "Adjunction problems";
	    case 35: return "Gromov-Witten invariants, quantum cohomology, Gopakumar-Vafa invariants, Donaldson-Thomas invariants";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Real algebraic and real analytic geometry
	  switch(min)
	    {
	    case  5: return "Real algebraic sets";
	    case 10: return "Semialgebraic sets and related spaces";
	    case 15: return "Real analytic and semianalytic sets";
	    case 20: return "Nash functions and manifolds";
	    case 25: return "Topology of real algebraic varieties";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Computational aspects in algebraic geometry
	  switch(min)
	    {
	    case  5: return "Curves";
	    case 10: return "Surfaces, hypersurfaces";
	    case 15: return "Higher-dimensional varieties";
	    case 20: return "Effectivity, complexity";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Affine geometry
	  switch(min)
	    {
	    case  5: return "Classification of affine varieties";
	    case 10: return "Affine spaces (automorphisms, embeddings, exotic structures, cancellation problem)";
	    case 15: return "Jacobian problem";
	    case 20: return "Group actions on affine varieties";
	    case 25: return "Affine fibrations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Tropical geometry
	  switch(min)
	    {
	    case  5: return "Tropical geometry";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    default: return "Subcategory not implemented";
    }
}
