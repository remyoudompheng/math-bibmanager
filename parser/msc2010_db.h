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
    case  0: // General
      switch (med)
	{
	case 'A': // General and miscellaneous specific topics
	  switch(min)
	    {
	    case  5: return "General mathematics";
	    case  6: return "Mathematics for nonmathematicians (engineering, social sciences, etc.)";
	    case  7: return "Problem books";
	    case  8: return "Recreational mathematics";
	    case  9: return "Popularization of mathematics";
	    case 15: return "Bibliographies";
	    case 17: return "External book reviews";
	    case 20: return "Dictionaries and other general reference works";
	    case 22: return "Formularies";
	    case 30: return "Philosophy of mathematics";
	    case 35: return "Methodology of mathematics, didactics";
	    case 65: return "Mathematics and music";
	    case 66: return "Mathematics and visual arts, visualization";
	    case 67: return "Mathematics and architecture";
	    case 69: return "General applied mathematics";
	    case 71: return "Theory of mathematical modeling";
	    case 72: return "General methods of simulation";
	    case 73: return "Dimensional analysis";
	    case 79: return "Physics";
	    case 99: return "Miscellaneous topics";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Conference proceedings and collections of papers
	  switch(min)
	    {
	    case  5: return "Collections of abstracts of lectures";
	    case 10: return "Collections of articles of general interest";
	    case 15: return "Collections of articles of miscellaneous specific content";
	    case 20: return "Proceedings of conferences of general interest";
	    case 25: return "Proceedings of conferences of miscellaneous specific interest";
	    case 30: return "Festschriften";
	    case 50: return "Volumes of selected translations";
	    case 55: return "Miscellaneous volumes of translations";
	    case 60: return "Collections of reprinted articles";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case  1: // History and biography
      switch (med)
	{
	case 'A': // History of mathematics and mathematicians
	  switch(min)
	    {
	    case  5: return "General histories, source books";
	    case  7: return "Ethnomathematics, general";
	    case 10: return "Paleolithic, Neolithic";
	    case 12: return "Indigenous cultures of the Americas";
	    case 13: return "Other indigenous cultures (non-European)";
	    case 15: return "Indigenous European cultures (pre-Greek, etc.)";
	    case 16: return "Egyptian";
	    case 17: return "Babylonian";
	    case 20: return "Greek, Roman";
	    case 25: return "China";
	    case 27: return "Japan";
	    case 29: return "Southeast Asia";
	    case 30: return "Islam (Medieval)";
	    case 32: return "India";
	    case 35: return "Medieval";
	    case 40: return "15th and 16th centuries, Renaissance";
	    case 45: return "17th century";
	    case 50: return "18th century";
	    case 55: return "19th century";
	    case 60: return "20th century";
	    case 61: return "Twenty-first century";
	    case 65: return "Contemporary";
	    case 67: return "Future prospectives";
	    case 70: return "Biographies, obituaries, personalia, bibliographies";
	    case 72: return "Schools of mathematics";
	    case 73: return "Universities";
	    case 74: return "Other institutions and academies";
	    case 75: return "Collected or selected works; reprintings or translations of classics";
	    case 80: return "Sociology (and profession) of mathematics";
	    case 85: return "Historiography";
	    case 90: return "Bibliographic studies";
	    case 99: return "Miscellaneous topics";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case  3: // Mathematical logic and foundations
      switch (med)
	{
	case 'A': // Philosophical aspects of logic and foundations
	  switch(min)
	    {
	    case  5: return "Philosophical and critical";
	    case 10: return "Logic in the philosophy of science";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // General logic
	  switch(min)
	    {
	    case  5: return "Classical propositional logic";
	    case 10: return "Classical first-order logic";
	    case 15: return "Higher-order logic and type theory";
	    case 20: return "Subsystems of classical logic (including intuitionistic logic)";
	    case 22: return "Abstract deductive systems";
	    case 25: return "Decidability of theories and sets of sentences";
	    case 30: return "Foundations of classical theories (including reverse mathematics)";
	    case 35: return "Mechanization of proofs and logical operations";
	    case 40: return "Combinatory logic and lambda-calculus";
	    case 42: return "Logics of knowledge and belief (including belief change)";
	    case 44: return "Temporal logic";
	    case 45: return "Modal logic (including the logic of norms)";
	    case 47: return "Substructural logics (including relevance, entailment, linear logic, Lambek calculus, BCK and BCI logics)";
	    case 48: return "Probability and inductive logic";
	    case 50: return "Many-valued logic";
	    case 52: return "Fuzzy logic; logic of vagueness";
	    case 53: return "Paraconsistent logics";
	    case 55: return "Intermediate logics";
	    case 60: return "Other nonclassical logic";
	    case 62: return "Combined logics";
	    case 65: return "Logic of natural languages";
	    case 70: return "Logic in computer science";
	    case 80: return "Other applications of logic";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Model theory
	  switch(min)
	    {
	    case  5: return "Equational classes, universal algebra";
	    case  7: return "Basic properties of first-order languages and structures";
	    case 10: return "Quantifier elimination, model completeness and related topics";
	    case 13: return "Finite structures";
	    case 15: return "Denumerable structures";
	    case 20: return "Ultraproducts and related constructions";
	    case 25: return "Model-theoretic forcing";
	    case 30: return "Other model constructions";
	    case 35: return "Categoricity and completeness of theories";
	    case 40: return "Interpolation, preservation, definability";
	    case 45: return "Classification theory, stability and related concepts";
	    case 48: return "Abstract elementary classes and related topics";
	    case 50: return "Models with special properties (saturated, rigid, etc.)";
	    case 52: return "Properties of classes of models";
	    case 55: return "Set-theoretic model theory";
	    case 57: return "Effective and recursion-theoretic model theory";
	    case 60: return "Model-theoretic algebra";
	    case 62: return "Models of arithmetic and set theory";
	    case 64: return "Model theory of ordered structures; o-minimality";
	    case 65: return "Models of other mathematical theories";
	    case 68: return "Other classical first-order model theory";
	    case 70: return "Logic on admissible sets";
	    case 75: return "Other infinitary logic";
	    case 80: return "Logic with extra quantifiers and operators";
	    case 85: return "Second- and higher-order model theory";
	    case 90: return "Nonclassical models (Boolean-valued, sheaf, etc.)";
	    case 95: return "Abstract model theory";
	    case 98: return "Applications of model theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Computability and recursion theory
	  switch(min)
	    {
	    case  3: return "Thue and Post systems, etc.";
	    case  5: return "Automata and formal grammars in connection with logical questions";
	    case 10: return "Turing machines and related notions";
	    case 15: return "Complexity of computation (including implicit computational complexity)";
	    case 20: return "Recursive functions and relations, subrecursive hierarchies";
	    case 25: return "Recursively (computably) enumerable sets and degrees";
	    case 28: return "Other Turing degree structures";
	    case 30: return "Other degrees and reducibilities";
	    case 32: return "Algorithmic randomness and dimension";
	    case 35: return "Undecidability and degrees of sets of sentences";
	    case 40: return "Word problems, etc.";
	    case 45: return "Theory of numerations, effectively presented structures";
	    case 50: return "Recursive equivalence types of sets and structures, isols";
	    case 55: return "Hierarchies";
	    case 60: return "Computability and recursion theory on ordinals, admissible sets, etc.";
	    case 65: return "Higher-type and set recursion theory";
	    case 70: return "Inductive definability";
	    case 75: return "Abstract and axiomatic computability and recursion theory";
	    case 78: return "Computation over the reals";
	    case 80: return "Applications of computability and recursion theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Set theory
	  switch(min)
	    {
	    case  2: return "Partition relations";
	    case  4: return "Ordered sets and their cofinalities; pcf theory";
	    case  5: return "Other combinatorial set theory";
	    case 10: return "Ordinal and cardinal numbers";
	    case 15: return "Descriptive set theory";
	    case 17: return "Cardinal characteristics of the continuum";
	    case 20: return "Other classical set theory (including functions, relations, and set algebra)";
	    case 25: return "Axiom of choice and related propositions";
	    case 30: return "Axiomatics of classical set theory and its fragments";
	    case 35: return "Consistency and independence results";
	    case 40: return "Other aspects of forcing and Boolean-valued models";
	    case 45: return "Inner models, including constructibility, ordinal definability, and core models";
	    case 47: return "Other notions of set-theoretic definability";
	    case 50: return "Continuum hypothesis and Martin's axiom";
	    case 55: return "Large cardinals";
	    case 57: return "Generic absoluteness and forcing axioms";
	    case 60: return "Determinacy principles";
	    case 65: return "Other hypotheses and axioms";
	    case 70: return "Nonclassical and second-order set theories";
	    case 72: return "Fuzzy set theory";
	    case 75: return "Applications of set theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Proof theory and constructive mathematics
	  switch(min)
	    {
	    case  3: return "Proof theory, general";
	    case  5: return "Cut-elimination and normal-form theorems";
	    case  7: return "Structure of proofs";
	    case 10: return "Functionals in proof theory";
	    case 15: return "Recursive ordinals and ordinal notations";
	    case 20: return "Complexity of proofs";
	    case 25: return "Relative consistency and interpretations";
	    case 30: return "First-order arithmetic and fragments";
	    case 35: return "Second- and higher-order arithmetic and fragments";
	    case 40: return "Gödel numberings and issues of incompleteness";
	    case 45: return "Provability logics and related algebras (e.g., diagonalizable algebras)";
	    case 50: return "Metamathematics of constructive systems";
	    case 52: return "Linear logic and other substructural logics";
	    case 55: return "Intuitionistic mathematics";
	    case 60: return "Constructive and recursive analysis";
	    case 65: return "Other constructive mathematics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Algebraic logic
	  switch(min)
	    {
	    case  5: return "Boolean algebras";
	    case 10: return "Lattices and related structures";
	    case 12: return "Quantum logic";
	    case 15: return "Cylindric and polyadic algebras; relation algebras";
	    case 20: return "Łukasiewicz and Post algebras";
	    case 25: return "Other algebras related to logic";
	    case 27: return "Abstract algebraic logic";
	    case 30: return "Categorical logic, topoi";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Nonstandard models
	  switch(min)
	    {
	    case  5: return "Nonstandard models in mathematics";
	    case 10: return "Other applications of nonstandard models (economics, physics, etc.)";
	    case 15: return "Nonstandard models of arithmetic";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case  5: // Combinatorics
      switch (med)
	{
	case 'A': // Enumerative combinatorics
	  switch(min)
	    {
	    case  5: return "Permutations, words, matrices";
	    case 10: return "Factorials, binomial coefficients, combinatorial functions";
	    case 15: return "Exact enumeration problems, generating functions";
	    case 16: return "Asymptotic enumeration";
	    case 17: return "Partitions of integers";
	    case 18: return "Partitions of sets";
	    case 19: return "Combinatorial identities, bijective combinatorics";
	    case 20: return "Combinatorial inequalities";
	    case 30: return "q-calculus and related topics";
	    case 40: return "Umbral calculus";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Designs and configurations
	  switch(min)
	    {
	    case  5: return "Block designs";
	    case  7: return "Triple systems";
	    case 10: return "Difference sets (number-theoretic, group-theoretic, etc.)";
	    case 15: return "Orthogonal arrays, Latin squares, Room squares";
	    case 20: return "Matrices (incidence, Hadamard, etc.)";
	    case 25: return "Finite geometries";
	    case 30: return "Other designs, configurations";
	    case 35: return "Matroids, geometric lattices";
	    case 40: return "Packing and covering";
	    case 45: return "Tessellation and tiling problems";
	    case 50: return "Polyominoes";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Graph theory
	  switch(min)
	    {
	    case  5: return "Trees";
	    case  7: return "Vertex degrees";
	    case 10: return "Planar graphs; geometric and topological aspects of graph theory";
	    case 12: return "Distance in graphs";
	    case 15: return "Coloring of graphs and hypergraphs";
	    case 17: return "Perfect graphs";
	    case 20: return "Directed graphs (digraphs), tournaments";
	    case 21: return "Flows in graphs";
	    case 22: return "Signed and weighted graphs";
	    case 25: return "Graphs and abstract algebra (groups, rings, fields, etc.)";
	    case 30: return "Enumeration in graph theory";
	    case 31: return "Graph polynomials";
	    case 35: return "Extremal problems";
	    case 38: return "Paths and cycles";
	    case 40: return "Connectivity";
	    case 42: return "Density (toughness, etc.)";
	    case 45: return "Eulerian and Hamiltonian graphs";
	    case 50: return "Graphs and linear algebra (matrices, eigenvalues, etc.)";
	    case 51: return "Graph designs and isomomorphic decomposition";
	    case 55: return "Generalized Ramsey theory";
	    case 57: return "Games on graphs";
	    case 60: return "Isomorphism problems (reconstruction conjecture, etc.) and homomorphisms (subgraph embedding, etc.)";
	    case 62: return "Graph representations (geometric and intersection representations, etc.)";
	    case 63: return "Infinite graphs";
	    case 65: return "Hypergraphs";
	    case 69: return "Dominating sets, independent sets, cliques";
	    case 70: return "Factorization, matching, partitioning, covering and packing";
	    case 72: return "Fractional graph theory, fuzzy graph theory";
	    case 75: return "Structural characterization of families of graphs";
	    case 76: return "Graph operations (line graphs, products, etc.)";
	    case 78: return "Graph labelling (graceful graphs, bandwidth, etc.)";
	    case 80: return "Random graphs";
	    case 81: return "Random walks on graphs";
	    case 82: return "Small world graphs, complex networks";
	    case 83: return "Graph minors";
	    case 85: return "Graph algorithms";
	    case 90: return "Applications";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Extremal combinatorics
	  switch(min)
	    {
	    case  5: return "Extremal set theory";
	    case 10: return "Ramsey theory";
	    case 15: return "Transversal (matching) theory";
	    case 40: return "Probabilistic methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Algebraic combinatorics
	  switch(min)
	    {
	    case  5: return "Symmetric functions and generalizations";
	    case 10: return "Combinatorial aspects of representation theory";
	    case 15: return "Combinatorial aspects of groups and algebras";
	    case 18: return "Group actions on combinatorial structures";
	    case 30: return "Association schemes, strongly regular graphs";
	    case 40: return "Combinatorial aspects of commutative algebra";
	    case 45: return "Combinatorial aspects of simplicial complexes";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case  6: // Order, lattices, ordered algebraic structures
      switch (med)
	{
	case 'A': // Ordered sets
	  switch(min)
	    {
	    case  5: return "Total order";
	    case  6: return "Partial order, general";
	    case  7: return "Combinatorics of partially ordered sets";
	    case 11: return "Algebraic aspects of posets";
	    case 12: return "Semilattices";
	    case 15: return "Galois correspondences, closure operators";
	    case 75: return "Generalizations of ordered sets";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Lattices
	  switch(min)
	    {
	    case  5: return "Structure theory";
	    case 10: return "Ideals, congruence relations";
	    case 15: return "Representation theory";
	    case 20: return "Varieties of lattices";
	    case 23: return "Complete lattices, completions";
	    case 25: return "Free lattices, projective lattices, word problems";
	    case 30: return "Topological lattices, order topologies";
	    case 35: return "Continuous lattices and posets, applications";
	    case 75: return "Generalizations of lattices";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Modular lattices, complemented lattices
	  switch(min)
	    {
	    case  5: return "Modular lattices, Desarguesian lattices";
	    case 10: return "Semimodular lattices, geometric lattices";
	    case 15: return "Complemented lattices, orthocomplemented lattices and posets";
	    case 20: return "Complemented modular lattices, continuous geometries";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Distributive lattices
	  switch(min)
	    {
	    case  5: return "Structure and representation theory";
	    case 10: return "Complete distributivity";
	    case 15: return "Pseudocomplemented lattices";
	    case 20: return "Heyting algebras";
	    case 22: return "Frames, locales";
	    case 25: return "Post algebras";
	    case 30: return "De Morgan algebras, Łukasiewicz algebras";
	    case 35: return "MV-algebras";
	    case 50: return "Lattices and duality";
	    case 72: return "Fuzzy lattices (soft algebras) and related topics";
	    case 75: return "Other generalizations of distributive lattices";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Boolean algebras
	  switch(min)
	    {
	    case  5: return "Structure theory";
	    case 10: return "Chain conditions, complete algebras";
	    case 15: return "Stone spaces (Boolean spaces) and related structures";
	    case 20: return "Ring-theoretic properties";
	    case 25: return "Boolean algebras with additional operations (diagonalizable algebras, etc.)";
	    case 30: return "Boolean functions";
	    case 75: return "Generalizations of Boolean algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Ordered structures
	  switch(min)
	    {
	    case  5: return "Ordered semigroups and monoids";
	    case  7: return "Quantales";
	    case 10: return "Noether lattices";
	    case 15: return "Ordered groups";
	    case 20: return "Ordered abelian groups, Riesz groups, ordered linear spaces";
	    case 25: return "Ordered rings, algebras, modules";
	    case 30: return "Topological lattices, order topologies";
	    case 35: return "BCK-algebras, BCI-algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case  8: // General algebraic systems
      switch (med)
	{
	case 'A': // Algebraic structures
	  switch(min)
	    {
	    case  2: return "Relational systems, laws of composition";
	    case  5: return "Structure theory";
	    case 30: return "Subalgebras, congruence relations";
	    case 35: return "Automorphisms, endomorphisms";
	    case 40: return "Operations, polynomials, primal algebras";
	    case 45: return "Equational compactness";
	    case 50: return "Word problems";
	    case 55: return "Partial algebras";
	    case 60: return "Unary algebras";
	    case 62: return "Finitary algebras";
	    case 65: return "Infinitary algebras";
	    case 68: return "Heterogeneous algebras";
	    case 70: return "Applications of universal algebra in computer science";
	    case 72: return "Fuzzy algebraic structures";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Varieties
	  switch(min)
	    {
	    case  5: return "Equational logic, Mal'cev (Mal'tsev) conditions";
	    case 10: return "Congruence modularity, congruence distributivity";
	    case 15: return "Lattices of varieties";
	    case 20: return "Free algebras";
	    case 25: return "Products, amalgamated products, and other kinds of limits and colimits";
	    case 26: return "Subdirect products and subdirect irreducibility";
	    case 30: return "Injectives, projectives";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Other classes of algebras
	  switch(min)
	    {
	    case  5: return "Categories of algebras";
	    case 10: return "Axiomatic model classes";
	    case 15: return "Quasivarieties";
	    case 20: return "Natural dualities for classes of algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 11: // General algebraic systems
      switch (med)
	{
	case 'A': // Elementary number theory
	  switch(min)
	    {
	    case  5: return "Multiplicative structure; Euclidean algorithm; greatest common divisors";
	    case  7: return "Congruences; primitive roots; residue systems";
	    case 15: return "Power residues, reciprocity";
	    case 25: return "Arithmetic functions; related numbers; inversion formulas";
	    case 41: return "Primes";
	    case 51: return "Factorization; primality";
	    case 55: return "Continued fractions";
	    case 63: return "Radix representation; digital problems";
	    case 67: return "Other representations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Sequences and sets
	  switch(min)
	    {
	    case  5: return "Density, gaps, topology";
	    case 13: return "Additive bases, including sumsets";
	    case 25: return "Arithmetic progressions";
	    case 30: return "Arithmetic combinatorics; higher degree uniformity";
	    case 34: return "Representation functions";
	    case 37: return "Recurrences";
	    case 39: return "Fibonacci and Lucas numbers and polynomials and generalizations";
	    case 50: return "Sequences (mod m)";
	    case 57: return "Farey sequences; the sequences 1^k, 2^k, ...";
	    case 65: return "Binomial coefficients; factorials; q-identities";
	    case 68: return "Bernoulli and Euler numbers and polynomials";
	    case 73: return "Bell and Stirling numbers";
	    case 75: return "Other combinatorial number theory";
	    case 83: return "Special sequences and polynomials";
	    case 85: return "Automata sequences";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Polynomials and matrices
	  switch(min)
	    {
	    case  8: return "Polynomials";
	    case 20: return "Matrices, determinants";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Diophantine equations
	  switch(min)
	    {
	    case  4: return "Linear equations";
	    case  7: return "The Frobenius problem";
	    case  9: return "Quadratic and bilinear equations";
	    case 25: return "Cubic and quartic equations";
	    case 41: return "Higher degree equations; Fermat's equation";
	    case 45: return "Counting solutions of Diophantine equations";
	    case 57: return "Multiplicative and norm form equations";
	    case 59: return "Thue-Mahler equations";
	    case 61: return "Exponential equations";
	    case 68: return "Rational numbers as sums of fractions";
	    case 72: return "Equations in many variables";
	    case 75: return "Diophantine inequalities";
	    case 79: return "Congruences in many variables";
	    case 85: return "Representation problems";
	    case 88: return "p-adic and power series fields";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Forms and linear algebraic groups
	  switch(min)
	    {
	    case  4: return "Quadratic forms over general fields";
	    case  8: return "Quadratic forms over local rings and fields";
	    case 10: return "Forms over real fields";
	    case 12: return "Quadratic forms over global rings and fields";
	    case 16: return "General binary quadratic forms";
	    case 20: return "General ternary and quaternary quadratic forms; forms of more than two variables";
	    case 25: return "Sums of squares and representations by other particular quadratic forms";
	    case 39: return "Bilinear and Hermitian forms";
	    case 41: return "Class numbers of quadratic and Hermitian forms";
	    case 45: return "Analytic theory (Epstein zeta functions; relations with automorphic forms and functions)";
	    case 57: return "Classical groups";
	    case 70: return "K-theory of quadratic and Hermitian forms";
	    case 72: return "Galois cohomology of linear algebraic groups";
	    case 76: return "Forms of degree higher than two";
	    case 81: return "Algebraic theory of quadratic forms; Witt groups and rings";
	    case 88: return "Quadratic spaces; Clifford algebras";
	    case 95: return "p-adic theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Discontinuous groups and automorphic forms
	  switch(min)
	    {
	    case  3: return "Modular and automorphic functions";
	    case  6: return "Structure of modular groups and generalizations; arithmetic groups";
	    case 11: return "Holomorphic modular forms of integral weight";
	    case 12: return "Automorphic forms, one variable";
	    case 20: return "Dedekind eta function, Dedekind sums";
	    case 22: return "Relationship to Lie algebras and finite simple groups";
	    case 23: return "Relations with algebraic geometry and topology";
	    case 25: return "Hecke-Petersson operators, differential operators (one variable)";
	    case 27: return "Theta series; Weil representation; theta correspondences";
	    case 30: return "Fourier coefficients of automorphic forms";
	    case 32: return "Modular correspondences, etc.";
	    case 33: return "Congruences for modular and p-adic modular forms";
	    case 37: return "Forms of half-integer weight; nonholomorphic modular forms";
	    case 41: return "Automorphic forms on GL(2); Hilbert and Hilbert-Siegel modular groups and their modular and automorphic forms; Hilbert modular surfaces";
	    case 46: return "Siegel modular groups; Siegel and Hilbert-Siegel modular and automorphic forms";
	    case 50: return "Jacobi forms";
	    case 52: return "Modular forms associated to Drinfel'd modules";
	    case 55: return "Other groups and their modular and automorphic forms (several variables)";
	    case 60: return "Hecke-Petersson operators, differential operators (several variables)";
	    case 66: return "Langlands L-functions; one variable Dirichlet series and functional equations";
	    case 67: return "Special values of automorphic L-series, periods of modular forms, cohomology, modular symbols";
	    case 68: return "Dirichlet series in several complex variables associated to automorphic forms; Weyl group multiple Dirichlet series";
	    case 70: return "Representation-theoretic methods; automorphic representations over local and global fields";
	    case 72: return "Spectral theory; Selberg trace formula";
	    case 75: return "Cohomology of arithmetic groups";
	    case 80: return "Galois representations";
	    case 85: return "p-adic theory, local fields";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Arithmetic algebraic geometry (Diophantine geometry)
	  switch(min)
	    {
	    case  5: return "Elliptic curves over global fields";
	    case  7: return "Elliptic curves over local fields";
	    case  9: return "Drinfel'd modules; higher-dimensional motives, etc.";
	    case 10: return "Abelian varieties of dimension >1";
	    case 15: return "Complex multiplication and moduli of abelian varieties";
	    case 16: return "Elliptic and modular units";
	    case 18: return "Arithmetic aspects of modular and Shimura varieties";
	    case 20: return "Curves over finite and local fields";
	    case 25: return "Varieties over finite and local fields";
	    case 30: return "Curves of arbitrary genus or genus ≠1 over global fields";
	    case 32: return "Dessins d'enfants, Belyĭ theory";
	    case 35: return "Varieties over global fields";
	    case 40: return "L-functions of varieties over global fields; Birch-Swinnerton-Dyer conjecture";
	    case 42: return "Arithmetic mirror symmetry";
	    case 45: return "Geometric class field theory";
	    case 50: return "Heights";
	    case 55: return "Polylogarithms and relations with K-theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Geometry of numbers
	  switch(min)
	    {
	    case  6: return "Lattices and convex bodies";
	    case 16: return "Nonconvex bodies";
	    case 31: return "Lattice packing and covering";
	    case 46: return "Products of linear forms";
	    case 50: return "Minima of forms";
	    case 55: return "Quadratic forms (reduction theory, extreme forms, etc.)";
	    case 56: return "Automorphism groups of lattices";
	    case 60: return "Mean value and transfer theorems";
	    case 71: return "Relations with coding theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Diophantine approximation, transcendental number theory
	  switch(min)
	    {
	    case  4: return "Homogeneous approximation to one number";
	    case  6: return "Markov and Lagrange spectra and generalizations";
	    case 13: return "Simultaneous homogeneous approximation, linear forms";
	    case 17: return "Approximation by numbers from a fixed field";
	    case 20: return "Inhomogeneous linear forms";
	    case 25: return "Diophantine inequalities";
	    case 54: return "Small fractional parts of polynomials and generalizations";
	    case 61: return "Approximation in non-Archimedean valuations";
	    case 68: return "Approximation to algebraic numbers";
	    case 70: return "Continued fractions and generalizations";
	    case 71: return "Distribution modulo one";
	    case 72: return "Irrationality; linear independence over a field";
	    case 81: return "Transcendence (general theory)";
	    case 82: return "Measures of irrationality and of transcendence";
	    case 83: return "Metric theory";
	    case 85: return "Algebraic independence; Gel'fond's method";
	    case 86: return "Linear forms in logarithms; Baker's method";
	    case 87: return "Schmidt Subspace Theorem and applications";
	    case 89: return "Transcendence theory of elliptic and abelian functions";
	    case 91: return "Transcendence theory of other special functions";
	    case 93: return "Transcendence theory of Drinfel'd and t-modules";
	    case 95: return "Results involving abelian varieties";
	    case 97: return "Analogues of methods in Nevanlinna theory (work of Vojta et al.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Probabilistic theory: distribution modulo 1; metric theory of algorithms
	  switch(min)
	    {
	    case  6: return "General theory of distribution modulo 1 ";
	    case 16: return "Normal numbers, radix expansions, Pisot numbers, Salem numbers, good lattice points, etc.";
	    case 31: return "Special sequences";
	    case 36: return "Well-distributed sequences and other variations";
	    case 38: return "Irregularities of distribution, discrepancy";
	    case 41: return "Continuous, p-adic and abstract analogues";
	    case 45: return "Pseudo-random numbers; Monte Carlo methods";
	    case 50: return "Metric theory of continued fractions";
	    case 55: return "Metric theory of other algorithms and expansions; measure and Hausdorff dimension";
	    case 60: return "Diophantine approximation";
	    case 65: return "Arithmetic functions";
	    case 70: return "Harmonic analysis and almost periodicity";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Exponential sums and character sums
	  switch(min)
	    {
	    case  3: return "Trigonometric and exponential sums, general";
	    case  5: return "Gauss and Kloosterman sums; generalizations";
	    case  7: return "Estimates on exponential sums";
	    case 10: return "Jacobsthal and Brewer sums; other complete character sums";
	    case 15: return "Weyl sums";
	    case 20: return "Sums over primes";
	    case 26: return "Sums over arbitrary intervals";
	    case 40: return "Estimates on character sums";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Zeta and L-functions: analytic theory
	  switch(min)
	    {
	    case  6: return "ζ(s) and L(s,χ)";
	    case 20: return "Real zeros of L(s,χ); results on L(1,χ)";
	    case 26: return "Nonreal zeros of ζ(s) and L(s,χ); Riemann and other hypotheses";
	    case 32: return "Multiple Dirichlet series and zeta functions and multizeta values";
	    case 35: return "Hurwitz and Lerch zeta functions";
	    case 36: return "Selberg zeta functions and regularized determinants; applications to spectral theory, Dirichlet series, Eisenstein series, etc. Explicit formulas";
	    case 38: return "Zeta and L-functions in characteristic p";
	    case 41: return "Other Dirichlet series and zeta functions";
	    case 45: return "Tauberian theorems";
	    case 50: return "Relations with random matrices";
	    case 55: return "Relations with noncommutative geometry";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Multiplicative number theory
	  switch(min)
	    {
	    case  5: return "Distribution of primes";
	    case 13: return "Primes in progressions";
	    case 25: return "Distribution of integers with specified multiplicative constraints";
	    case 30: return "Turán theory";
	    case 32: return "Primes represented by polynomials; other multiplicative structure of polynomial values";
	    case 35: return "Sieves";
	    case 36: return "Applications of sieve methods";
	    case 37: return "Asymptotic results on arithmetic functions";
	    case 45: return "Asymptotic results on counting functions for algebraic and topological structures";
	    case 56: return "Rate of growth of arithmetic functions";
	    case 60: return "Distribution functions associated with additive and positive multiplicative functions";
	    case 64: return "Other results on the distribution of values or the characterization of arithmetic functions";
	    case 69: return "Distribution of integers in special residue classes";
	    case 75: return "Applications of automorphic functions and forms to multiplicative problems";
	    case 80: return "Generalized primes and integers";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Additive number theory; partitions
	  switch(min)
	    {
	    case  5: return "Waring's problem and variants";
	    case 21: return "Lattice points in specified regions";
	    case 32: return "Goldbach-type theorems; other additive questions involving primes";
	    case 55: return "Applications of the Hardy-Littlewood method";
	    case 70: return "Inverse problems of additive number theory, including sumsets";
	    case 81: return "Elementary theory of partitions";
	    case 82: return "Analytic theory of partitions";
	    case 83: return "Partitions; congruences and congruential restrictions";
	    case 84: return "Partition identities; identities of Rogers-Ramanujan type";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Algebraic number theory: global fields
	  switch(min)
	    {
	    case  4: return "Algebraic numbers; rings of algebraic integers";
	    case  6: return "PV-numbers and generalizations; other special algebraic numbers; Mahler measure";
	    case  9: return "Polynomials (irreducibility, etc.)";
	    case 11: return "Quadratic extensions";
	    case 16: return "Cubic and quartic extensions";
	    case 18: return "Cyclotomic extensions";
	    case 20: return "Other abelian and metabelian extensions";
	    case 21: return "Other number fields";
	    case 23: return "Iwasawa theory";
	    case 27: return "Units and factorization";
	    case 29: return "Class numbers, class groups, discriminants";
	    case 32: return "Galois theory";
	    case 33: return "Integral representations related to algebraic numbers; Galois module structure of rings of integers";
	    case 34: return "Galois cohomology";
	    case 37: return "Class field theory";
	    case 39: return "Langlands-Weil conjectures, nonabelian class field theory";
	    case 42: return "Zeta functions and L-functions of number fields";
	    case 44: return "Distribution of prime ideals";
	    case 45: return "Density theorems";
	    case 47: return "Other analytic theory";
	    case 52: return "Quaternion and other division algebras: arithmetic, zeta functions";
	    case 54: return "Other algebras and orders, and their zeta and L-functions";
	    case 56: return "Adèle rings and groups";
	    case 58: return "Arithmetic theory of algebraic function fields";
	    case 60: return "Cyclotomic function fields (class groups, Bernoulli objects, etc.)";
	    case 65: return "Class groups and Picard groups of orders";
	    case 70: return "K-theory of global fields";
	    case 80: return "Totally real fields";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Algebraic number theory: local and p-adic fields
	  switch(min)
	    {
	    case  5: return "Polynomials";
	    case 15: return "Ramification and extension theory";
	    case 20: return "Galois theory";
	    case 23: return "Integral representations";
	    case 25: return "Galois cohomology";
	    case 31: return "Class field theory; p-adic formal groups";
	    case 37: return "Langlands-Weil conjectures, nonabelian class field theory";
	    case 40: return "Zeta functions and L-functions";
	    case 45: return "Algebras and orders, and their zeta functions";
	    case 70: return "K-theory of local fields";
	    case 80: return "Other analytic theory (analogues of beta and gamma functions, p-adic integration, etc.)";
	    case 82: return "Non-Archimedean dynamical systems";
	    case 85: return "Other nonanalytic theory";
	    case 90: return "Prehomogeneous vector spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Finite fields and commutative rings (number-theoretic aspects)
	  switch(min)
	    {
	    case  6: return "Polynomials";
	    case 22: return "Cyclotomy";
	    case 23: return "Exponential sums";
	    case 24: return "Other character sums and Gauss sums";
	    case 30: return "Structure theory";
	    case 55: return "Arithmetic theory of polynomial rings over finite fields";
	    case 60: return "Finite upper half-planes";
	    case 71: return "Algebraic coding theory; cryptography";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'U': // Connections with logic
	  switch(min)
	    {
	    case  5: return "Decidability";
	    case  7: return "Ultraproducts";
	    case  9: return "Model theory";
	    case 10: return "Nonstandard arithmetic";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Y': // Computational number theory
	  switch(min)
	    {
	    case  5: return "Factorization";
	    case 11: return "Primality";
	    case 16: return "Algorithms; complexity";
	    case 35: return "Analytic computations";
	    case 40: return "Algebraic number theory computations";
	    case 50: return "Computer solution of Diophantine equations";
	    case 55: return "Calculation of integer sequences";
	    case 60: return "Evaluation of constants";
	    case 65: return "Continued fraction calculations";
	    case 70: return "Values of arithmetic functions; tables";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Z': // Miscellaneous applications of number theory
	  switch(min)
	    {
	    case  5: return "Miscellaneous applications of number theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 12: // Field theory and polynomials
      switch(med)
	{
	case 'D': // Real and complex fields
	  switch(min)
	    {
	    case  5: return "Polynomials: factorization";
	    case 10: return "Polynomials: location of zeros (algebraic theorems)";
	    case 15: return "Fields related with sums of squares (formally real fields, Pythagorean fields, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // General field theory
	  switch(min)
	    {
	    case  5: return "Polynomials (irreducibility, etc.)";
	    case 10: return "Special polynomials";
	    case 12: return "Equations";
	    case 15: return "Skew fields, division rings";
	    case 20: return "Finite fields (field-theoretic aspects)";
	    case 25: return "Hilbertian fields; Hilbert's irreducibility theorem";
	    case 30: return "Field arithmetic";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Field extensions
	  switch(min)
	    {
	    case  5: return "Algebraic extensions";
	    case 10: return "Separable extensions, Galois theory";
	    case 12: return "Inverse Galois theory";
	    case 15: return "Inseparable extensions";
	    case 20: return "Transcendental extensions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Homological methods (field theory)
	  switch(min)
	    {
	    case  5: return "Galois cohomology";
	    case 10: return "Cohomological dimension";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Differential and difference algebra
	  switch(min)
	    {
	    case  5: return "Differential algebra";
	    case 10: return "Difference algebra";
	    case 20: return "Abstract differential equations";
	    case 25: return "p-adic differential equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Topological fields
	  switch(min)
	    {
	    case  5: return "Normed fields";
	    case 10: return "Valued fields";
	    case 12: return "Formally p-adic fields";
	    case 15: return "Ordered fields";
	    case 17: return "Topological semifields";
	    case 20: return "General valuation theory";
	    case 25: return "Non-Archimedean valued fields";
	    case 27: return "Krasner-Tate algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Generalizations of fields
	  switch(min)
	    {
	    case  5: return "Near-fields";
	    case 10: return "Semifields";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Connections with logic
	  switch(min)
	    {
	    case  5: return "Decidability";
	    case 10: return "Ultraproducts";
	    case 12: return "Model theory";
	    case 15: return "Nonstandard arithmetic";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Y': // Computational aspects of field theory and polynomials
	  switch(min)
	    {
	    case  5: return "Computational aspects of field theory and polynomials";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 13: // Commutative algebra
      switch(med)
	{
	case 'A': // General commutative ring theory
	  switch(min)
	    {
	    case  2: return "Graded rings";
	    case  5: return "Divisibility; factorizations";
	    case 15: return "Ideals; multiplicative ideal theory";
	    case 18: return "Valuations and their generalizations";
	    case 30: return "Associated graded rings of ideals (Rees ring, form ring), analytic spread and related topics";
	    case 35: return "Characteristic p methods (Frobenius endomorphism) and reduction to characteristic p; tight closure";
	    case 50: return "Actions of groups on commutative rings; invariant theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Ring extensions and related topics
	  switch(min)
	    {
	    case  2: return "Extension theory";
	    case  5: return "Galois theory";
	    case 10: return "Morphisms";
	    case 21: return "Integral dependence; going up, going down";
	    case 22: return "Integral closure of rings and ideals; integrally closed rings, related rings (Japanese, etc.)";
	    case 25: return "Polynomials over commutative rings";
	    case 30: return "Rings of fractions and localization";
	    case 35: return "Completion";
	    case 40: return "Étale and flat extensions; Henselization; Artin approximation";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Theory of modules and ideals
	  switch(min)
	    {
	    case  5: return "Structure, classification theorems";
	    case 10: return "Projective and free modules and ideals";
	    case 11: return "Injective and flat modules and ideals";
	    case 12: return "Torsion modules and ideals";
	    case 13: return "Other special types";
	    case 14: return "Cohen-Macaulay modules";
	    case 15: return "Dimension theory, depth, related rings (catenary, etc.)";
	    case 20: return "Class groups";
	    case 40: return "Linkage, complete intersections and determinantal ideals";
	    case 60: return "Module categories";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Homological methods
	  switch(min)
	    {
	    case  2: return "Syzygies, resolutions, complexes";
	    case  3: return "(Co)homology of commutative rings and algebras (e.g., Hochschild, André-Quillen, cyclic, dihedral, etc.)";
	    case  5: return "Homological dimension";
	    case  7: return "Homological functors on modules (Tor, Ext, etc.)";
	    case  9: return "Derived categories";
	    case 10: return "Deformations and infinitesimal methods";
	    case 15: return "Grothendieck groups, K-theory";
	    case 22: return "Homological conjectures (intersection theorems)";
	    case 30: return "Torsion theory";
	    case 40: return "Hilbert-Samuel and Hilbert-Kunz functions; Poincaré series";
	    case 45: return "Local cohomology";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Chain conditions, finiteness conditions
	  switch(min)
	    {
	    case  5: return "Noetherian rings and modules";
	    case 10: return "Artinian rings and modules, finite-dimensional algebras";
	    case 15: return "Rings and modules of finite generation or presentation; number of generators";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Arithmetic rings and other special rings
	  switch(min)
	    {
	    case  5: return "Dedekind, Prüfer, Krull and Mori rings and their generalizations";
	    case  7: return "Euclidean rings and generalizations";
	    case 10: return "Principal ideal rings";
	    case 15: return "Rings defined by factorization properties (e.g., atomic, factorial, half-factorial)";
	    case 20: return "Polynomial rings and ideals; rings of integer-valued polynomials";
	    case 25: return "Formal power series rings";
	    case 30: return "Valuation rings";
	    case 35: return "Witt vectors and related rings";
	    case 40: return "Excellent rings";
	    case 45: return "Seminormal rings";
	    case 50: return "Rings with straightening laws, Hodge algebras";
	    case 55: return "Stanley-Reisner face rings; simplicial complexes";
	    case 60: return "Cluster algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Integral domains
	  switch(min)
	    {
	    case  5: return "Integral domains";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Local rings and semilocal rings
	  switch(min)
	    {
	    case  5: return "Regular local rings";
	    case 10: return "Special types (Cohen-Macaulay, Gorenstein, Buchsbaum, etc.)";
	    case 15: return "Multiplicity theory and related topics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Topological rings and modules
	  switch(min)
	    {
	    case  5: return "Power series rings";
	    case  7: return "Analytical algebras and rings";
	    case 10: return "Complete rings, completion";
	    case 15: return "Henselian rings";
	    case 20: return "Global topological rings";
	    case 25: return "Ordered rings";
	    case 30: return "Real algebra";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Applications of logic to commutative algebra
	  switch(min)
	    {
	    case  5: return "Applications of logic to commutative algebra";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Finite commutative rings
	  switch(min)
	    {
	    case  5: return "Structure";
	    case 10: return "Polynomials";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Differential algebra
	  switch(min)
	    {
	    case  5: return "Modules of differentials";
	    case 10: return "Rings of differential operators and their modules";
	    case 15: return "Derivations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Computational aspects and applications
	  switch(min)
	    {
	    case  5: return "Polynomials, factorization";
	    case 10: return "Gröbner bases; other bases for ideals and modules (e.g., Janet and border bases)";
	    case 15: return "Solving polynomial systems; resultants";
	    case 20: return "Computational homological algebra";
	    case 25: return "Applications of commutative algebra (e.g., to statistics, control theory, optimization, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
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
	    case  5: return "Formal groups, p-divisible groups";
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
	    case  5: return "Varieties defined by ring conditions (factorial, Cohen-Macaulay, seminormal)";
	    case  6: return "Linkage";
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
    case 15: // Linear and multilinear algebra; matrix theory
      switch (med)
	{
	case 'A': // Basic linear algebra
	  switch(min)
	    {
	    case  3: return "Vector spaces, linear dependence, rank";
	    case  4: return "Linear transformations, semilinear transformations";
	    case  6: return "Linear equations";
	    case  9: return "Matrix inversion, generalized inverses";
	    case 12: return "Conditioning of matrices";
	    case 15: return "Determinants, permanents, other special matrix functions";
	    case 16: return "Matrix exponential and similar functions of matrices";
	    case 18: return "Eigenvalues, singular values, and eigenvectors";
	    case 21: return "Canonical forms, reductions, classification";
	    case 22: return "Matrix pencils";
	    case 23: return "Factorization of matrices";
	    case 24: return "Matrix equations and identities";
	    case 27: return "Commutativity";
	    case 29: return "Inverse problems";
	    case 30: return "Algebraic systems of matrices";
	    case 39: return "Linear inequalities";
	    case 42: return "Inequalities involving eigenvalues and eigenvectors";
	    case 45: return "Miscellaneous inequalities involving matrices";
	    case 54: return "Matrices over function rings in one or more variables";
	    case 60: return "Norms of matrices, numerical range, applications of functional analysis to matrix theory";
	    case 63: return "Quadratic and bilinear forms, inner products";
	    case 66: return "Clifford algebras, spinors";
	    case 69: return "Multilinear algebra, tensor products";
	    case 72: return "Vector and tensor algebra, theory of invariants";
	    case 75: return "Exterior algebra, Grassmann algebras";
	    case 78: return "Other algebras built from modules";
	    case 80: return "Max-plus and related algebras";
	    case 83: return "Matrix completion problems";
	    case 86: return "Linear preserver problems";
	    case 99: return "Miscellaneous topics";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Special matrices
	  switch(min)
	    {
	    case  5: return "Toeplitz, Cauchy, and related matrices";
	    case 10: return "Orthogonal matrices";
	    case 15: return "Fuzzy matrices";
	    case 33: return "Matrices over special rings (quaternions, finite fields, etc.)";
	    case 34: return "Boolean and Hadamard matrices";
	    case 35: return "Sign pattern matrices";
	    case 36: return "Matrices of integers";
	    case 48: return "Positive matrices and their generalizations; cones of matrices";
	    case 51: return "Stochastic matrices";
	    case 52: return "Random matrices";
	    case 57: return "Hermitian, skew-Hermitian, and related matrices";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 16: // Associative rings and algebras
      switch (med)
	{
	case 'B': // General and miscellaneous
	  switch(min)
	    {
	    case 50: return "Category-theoretic methods and results (except as in 16D90)";
	    case 70: return "Applications of logic";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Modules, bimodules and ideals
	  switch(min)
	    {
	    case 10: return "General module theory";
	    case 20: return "Bimodules";
	    case 25: return "Ideals";
	    case 30: return "Infinite-dimensional simple rings (except as in 16Kxx)";
	    case 40: return "Free, projective, and flat modules and ideals";
	    case 50: return "Injective modules, self-injective rings";
	    case 60: return "Simple and semisimple modules, primitive rings and ideals";
	    case 70: return "Structure and classification (except as in 16Gxx), direct sum decomposition, cancellation";
	    case 80: return "Other classes of modules and ideals";
	    case 90: return "Module categories; module theory in a category-theoretic context; Morita equivalence and duality";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Homological methods
	  switch(min)
	    {
	    case  5: return "Syzygies, resolutions, complexes";
	    case 10: return "Homological dimension";
	    case 20: return "Grothendieck groups, K-theory, etc.";
	    case 30: return "Homological functors on modules (Tor, Ext, etc.)";
	    case 35: return "Derived categories";
	    case 40: return "(Co)homology of rings and algebras (e.g. Hochschild, cyclic, dihedral, etc.)";
	    case 45: return "Differential graded algebras and applications";
	    case 50: return "von Neumann regular rings and generalizations";
	    case 60: return "Semihereditary and hereditary rings, free ideal rings, Sylvester rings, etc.";
	    case 65: return "Homological conditions on rings (generalizations of regular, Gorenstein, Cohen-Macaulay rings, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Representation theory of rings and algebras
	  switch(min)
	    {
	    case 10: return "Representations of Artinian rings";
	    case 20: return "Representations of quivers and partially ordered sets";
	    case 30: return "Representations of orders, lattices, algebras over commutative rings";
	    case 50: return "Cohen-Macaulay modules";
	    case 60: return "Representation type (finite, tame, wild, etc.)";
	    case 70: return "Auslander-Reiten sequences (almost split sequences) and Auslander-Reiten quivers";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Algebras and orders
	  switch(min)
	    {
	    case  5: return "Separable algebras (e.g., quaternion algebras, Azumaya algebras, etc.)";
	    case 10: return "Orders in separable algebras";
	    case 15: return "Commutative orders";
	    case 20: return "Lattices over orders";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Division rings and semisimple Artin rings
	  switch(min)
	    {
	    case 20: return "Finite-dimensional";
	    case 40: return "Infinite-dimensional and general";
	    case 50: return "Brauer groups";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Local rings and generalizations
	  switch(min)
	    {
	    case 30: return "Noncommutative local and semilocal rings, perfect rings";
	    case 60: return "Quasi-Frobenius rings";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Radicals and radical properties of rings
	  switch(min)
	    {
	    case 20: return "Jacobson radical, quasimultiplication";
	    case 40: return "Nil and nilpotent radicals, sets, ideals, rings";
	    case 60: return "Prime and semiprime rings";
	    case 80: return "General radicals and rings";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Chain conditions, growth conditions, and other forms of finiteness
	  switch(min)
	    {
	    case 10: return "Finite rings and finite-dimensional algebras";
	    case 20: return "Artinian rings and modules";
	    case 40: return "Noetherian rings and modules";
	    case 50: return "Localization and Noetherian rings";
	    case 60: return "Chain conditions on annihilators and summands: Goldie-type conditions, Krull dimension";
	    case 70: return "Chain conditions on other classes of submodules, ideals, subrings, etc.; coherence";
	    case 90: return "Growth rate, Gelfand-Kirillov dimension";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Rings with polynomial identity
	  switch(min)
	    {
	    case 10: return "T-ideals, identities, varieties of rings and algebras";
	    case 20: return "Semiprime p.i. rings, rings embeddable in matrices over commutative rings";
	    case 30: return "Trace rings and invariant theory";
	    case 40: return "Identities other than those of matrices over commutative rings";
	    case 50: return "Other kinds of identities (generalized polynomial, rational, involution)";
	    case 60: return "Functional identities";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Rings and algebras arising under various constructions
	  switch(min)
	    {
	    case 10: return "Rings determined by universal properties (free algebras, coproducts, adjunction of inverses, etc.)";
	    case 15: return "Finite generation, finite presentability, normal forms (diamond lemma, term-rewriting)";
	    case 20: return "Centralizing and normalizing extensions";
	    case 30: return "Universal enveloping algebras of Lie algebras";
	    case 32: return "Rings of differential operators";
	    case 34: return "Group rings, Laurent polynomial rings";
	    case 35: return "Twisted and skew group rings, crossed products";
	    case 36: return "Ordinary and skew polynomial rings and semigroup rings";
	    case 37: return "Quadratic and Koszul algebras";
	    case 38: return "Rings arising from non-commutative algebraic geometry";
	    case 40: return "Smash products of general Hopf actions";
	    case 50: return "Endomorphism rings; matrix rings";
	    case 60: return "Rings of functions, subdirect products, sheaves of rings";
	    case 70: return "Extensions of rings by ideals";
	    case 80: return "Deformations of rings";
	    case 85: return "Rings of fractions and localizations";
	    case 90: return "Torsion theories; radicals on module categories";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Hopf algebras, quantum groups and related topics
	  switch(min)
	    {
	    case  5: return "Hopf algebras and their applications";
	    case 10: return "Bialgebras";
	    case 15: return "Coalgebras and comodules; corings";
	    case 20: return "Ring-theoretic aspects of quantum groups";
	    case 25: return "Yang-Baxter equations";
	    case 30: return "Connections with combinatorics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'U': // Conditions on elements
	  switch(min)
	    {
	    case 10: return "Integral domains";
	    case 20: return "Ore rings, multiplicative sets, Ore localization";
	    case 30: return "Divisibility, noncommutative UFDs";
	    case 60: return "Units, groups of units";
	    case 70: return "Center, normalizer (invariant elements)";
	    case 80: return "Generalizations of commutativity";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'W': // Rings and algebras with additional structure
	  switch(min)
	    {
	    case 10: return "Rings with involution; Lie, Jordan and other nonassociative structures";
	    case 20: return "Automorphisms and endomorphisms";
	    case 22: return "Actions of groups and semigroups; invariant theory";
	    case 25: return "Derivations, actions of Lie algebras";
	    case 50: return "Graded rings and modules";
	    case 55: return "“Super” (or “skew”) structure";
	    case 60: return "Valuations, completions, formal power series and related constructions";
	    case 70: return "Filtered rings; filtrational and graded techniques";
	    case 80: return "Topological and ordered rings and modules";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Y': // Generalizations
	  switch(min)
	    {
	    case 30: return "Near-rings";
	    case 60: return "Semirings";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Z': // Computational aspects of associative rings
	  switch(min)
	    {
	    case  5: return "Computational aspects of associative rings";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 17: // Nonassociative rings and algebras
      switch (med)
	{
	case 'A': // General nonassociative rings
	  switch(min)
	    {
	    case  1: return "General theory";
	    case  5: return "Power-associative rings";
	    case 15: return "Noncommutative Jordan algebras";
	    case 20: return "Flexible algebras";
	    case 30: return "Algebras satisfying other identities";
	    case 32: return "Leibniz algebras";
	    case 35: return "Division algebras";
	    case 36: return "Automorphisms, derivations, other operators";
	    case 40: return "Ternary compositions";
	    case 42: return "Other n-ary compositions (n≥3)";
	    case 45: return "Quadratic algebras (but not quadratic Jordan algebras)";
	    case 50: return "Free algebras";
	    case 60: return "Structure theory";
	    case 65: return "Radical theory";
	    case 70: return "Superalgebras";
	    case 75: return "Composition algebras";
	    case 80: return "Valued algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Lie algebras and Lie superalgebras
	  switch(min)
	    {
	    case  1: return "Identities, free Lie (super)algebras";
	    case  5: return "Structure theory";
	    case  8: return "Coadjoint orbits; nilpotent varieties";
	    case 10: return "Representations, algebraic theory (weights)";
	    case 15: return "Representations, analytic theory";
	    case 20: return "Simple, semisimple, reductive (super)algebras";
	    case 22: return "Root systems";
	    case 25: return "Exceptional (super)algebras";
	    case 30: return "Solvable, nilpotent (super)algebras";
	    case 35: return "Universal enveloping (super)algebras";
	    case 37: return "Quantum groups (quantized enveloping algebras) and related deformations";
	    case 40: return "Automorphisms, derivations, other operators";
	    case 45: return "Lie algebras of linear algebraic groups";
	    case 50: return "Modular Lie (super)algebras";
	    case 55: return "Homological methods in Lie (super)algebras";
	    case 56: return "Cohomology of Lie (super)algebras";
	    case 60: return "Lie (super)algebras associated with other structures (associative, Jordan, etc.)";
	    case 62: return "Lie bialgebras; Lie coalgebras";
	    case 63: return "Poisson algebras";
	    case 65: return "Infinite-dimensional Lie (super)algebras";
	    case 66: return "Lie algebras of vector fields and related (super) algebras";
	    case 67: return "Kac-Moody (super)algebras; extended affine Lie algebras; toroidal Lie algebras";
	    case 68: return "Virasoro and related algebras";
	    case 69: return "Vertex operators; vertex operator algebras and related structures";
	    case 70: return "Graded Lie (super)algebras";
	    case 75: return "Color Lie (super)algebras";
	    case 80: return "Applications to integrable systems";
	    case 81: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Jordan algebras (algebras, triples and pairs)
	  switch(min)
	    {
	    case  5: return "Identities and free Jordan structures";
	    case 10: return "Structure theory";
	    case 17: return "Radicals";
	    case 20: return "Simple, semisimple algebras";
	    case 27: return "Idempotents, Peirce decompositions";
	    case 30: return "Associated groups, automorphisms";
	    case 36: return "Associated manifolds";
	    case 37: return "Associated geometries";
	    case 40: return "Exceptional Jordan structures";
	    case 50: return "Jordan structures associated with other structures";
	    case 55: return "Finite-dimensional structures";
	    case 60: return "Division algebras";
	    case 65: return "Jordan structures on Banach spaces and algebras";
	    case 70: return "Super structures";
	    case 90: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Other nonassociative rings and algebras
	  switch(min)
	    {
	    case  5: return "Alternative rings";
	    case 10: return "Mal'cev (Mal'tsev) rings and algebras";
	    case 15: return "Right alternative rings";
	    case 20: return "(γ,δ)-rings, including (1,-1)-rings";
	    case 25: return "Lie-admissible algebras";
	    case 92: return "Genetic algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    default: return "Subcategory not implemented";
    }
}
