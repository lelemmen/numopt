// This file is part of GQCG-numopt.
// 
// Copyright (C) 2017-2018  the GQCG developers
// 
// GQCG-numopt is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// GQCG-numopt is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with GQCG-numopt.  If not, see <http://www.gnu.org/licenses/>.
#ifndef NUMOPT_SOLVERTYPE_HPP
#define NUMOPT_SOLVERTYPE_HPP



namespace numopt {
namespace eigenproblem {


/**
 *  An enum class for the implemented solver types.
 */
enum class SolverType {
    DENSE,
    SPARSE,
    DAVIDSON
};


}  // namespace eigenproblem
}  // namespace numopt



#endif  // NUMOPT_SOLVERTYPE_HPP
